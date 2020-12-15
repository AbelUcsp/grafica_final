#include <math.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h> 
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "shader_s.h"
#include "util.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <stdio.h>
using namespace std;

bool expandir = false;
void mover(int );
int repeticiones;
bool ismove = false;
vector<string> movimientos;
float contador_Right = 0;
float contador_Left = 0;
float contador_Up = 0;
float contador_Down = 0;
float contador_Front = 0;
float contador_Back = 0;
float contadorG = 0.0f;
bool R = false;
bool L = false;
bool U = false;
bool D = false;
bool F = false;
bool B = false;
void (cubo::*pfun)(float);
bool HH = false;
bool VV = false;
bool final_ani = false;
// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
//bool rotate_ = false;
glm::mat4 model = glm::mat4(1.0f);
glm::mat4 projection;
glm::mat4 view;
GLuint projectionPos; GLuint modelviewPos;
///     projection
/// R   F   V
float angle_fov = 45.0f;
float plano_ancho = (float)SCR_WIDTH / (float)SCR_HEIGHT;   //proporcion
float plano_uno = 1.0f;             //respecto a la camara  ///distancia focal      near_plane
float plano_dos = 12.0f;

glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);


//GLuint VBO[162], VAO[162];
GLuint VBO[165], VAO[165];
cubo obj;

/**
bool  R_piramide = false;
bool  R_cubo = false;
bool  R_tercero = false;
*/
float r = 0.2f;
float g = 0.2f;
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void processInput(GLFWwindow* window);


cubito cube1(center1, "");
cubito cube2(center2, "");
cubito cube3(center3, "UF");
cubito cube4(center4, "DF");
cubito cube5(center5, "UFR");
cubito cube6(center6, "FR");
cubito cube7(center7, "DRF");
cubito cube8(center8, "DFL");
cubito cube9(center9, "FL");
cubito cube10(center10, "ULF");
cubito cube11(center11, "");
cubito cube12(center12, "UR");
cubito cube13(center13, "URB");
cubito cube14(center14, "BR");
cubito cube15(center15, "DBR");
cubito cube16(center16, "DR");
cubito cube17(center17, "");
cubito cube18(center18, "UB");
cubito cube19(center19, "UBL");
cubito cube20(center20, "BL");
cubito cube21(center21, "DLB");
cubito cube22(center22, "DB");
cubito cube23(center23, "");
cubito cube24(center24, "UL");
cubito cube25(center25, "DL");
cubito cube26(center26, "");
cubito cube27(center27, "");


bool firstMouse = true;
float yaw = -90.0f;	// yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right so we initially rotate a bit to the left.
float pitch = 0.0f;
float lastX = float(SCR_WIDTH) / 2.0;
float lastY = float(SCR_HEIGHT) / 2.0;
///float fov = 45.0f;

// timing
float deltaTime = 0.0f;	// time between current frame and last frame
float lastFrame = 0.0f;



void animacion(bool &XX, float &contador, float angle, void (cubo::*pfun)(float), cubo obj) {
    if (XX) {
        contador++;

        (obj.*pfun)(angle);
        if (contador == 9.0f) {
            contador = 0.0f;
            XX = false;
        }
    }
}


void ani_hor(bool& XX, float& contador, float angle){  
    if (XX) {
        contador++;

        obj.RIGHT(angle);
        if (contador == 36.0f) {
            contador = 0.0f;
            XX = false;
        }
    }
}

void ani_ver(bool& XX, float& contador, float angle){
    if (XX) {
        contador++;

        obj.LEFT(angle);
        if (contador == 36.0f) {
            contador = 0.0f;
            XX = false;
        }
    }
}

void bind_data(int n, int offset, float caras[6][6][5] ) {
   
    for (int i = 0; i < 6; ++i) {

        glBindVertexArray(VAO[i + offset]);
        glBindBuffer(GL_ARRAY_BUFFER, VBO[i + offset]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(caras[i]), caras[i], GL_DYNAMIC_DRAW);             //GL_STATIC_DRAW    GL_DYNAMIC_DRAW
        // position attribute
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
        // texture coord attribute
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
   
    }

};

void render(int i_, int n, Shader &ourShader, unsigned int &texture1) {
    for (int i = i_; i < n; ++i) {

        glBindVertexArray(VAO[i]);
        if (i % 3) {
            model = glm::translate(model, glm::vec3(1.1f, 0.0f, 0.0f));

         }
        if (HH) {
            model = glm::rotate(model, glm::radians(7.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            HH = false;
        }
        if (VV) {
            model = glm::rotate(model, glm::radians(7.0f), glm::vec3(-1.0f, 0.0f, 0.0f));
            VV = false;
        }
        ourShader.setMat4("model", model);

        glBindTexture(GL_TEXTURE_2D, texture1);
        glDrawArrays(GL_TRIANGLES, 0, 6);
        glBindVertexArray(0);
    }
};


void add_texture(unsigned int &texture, string str_texture) {
    //  black   white   yellow      orange      red     blue        green
    //unsigned int texture1, texture2, texture3, texture4, texture5, texture6, texture7;
    // ---------
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    // set the texture wrapping parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // set texture filtering parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load image, create texture and generate mipmaps
    int width, height, nrChannels;
    stbi_set_flip_vertically_on_load(true); // tell stb_image.h to flip loaded texture's on the y-axis.
    string path("C://Users/Abel/Desktop/grafica_labo/GLFW_GLAD_GLUT_GLEW_cmake_project/src/E_Cubo/texture/");
    path += str_texture;
    unsigned char* data = stbi_load(path.c_str(), &width, &height, &nrChannels, 0);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cout << "Failed to load texture" << std::endl;
    }
    stbi_image_free(data);

}

string change_order(string id, int i) {
    if (i == 1) {//inter
        string new_id(id.rbegin(), id.rend());
        return new_id;
    }
    if (i == 2) {//first
        string new_id(id.substr(1, 2));
        new_id += id[0];
        return new_id;
    }
    if (i == 3) {//last
        string new_id;
        new_id += id[2];
        new_id += id.substr(0, 2);
        return new_id;
    }
}   

void updateFrontOrientation(){
    obj.up[7]->id = change_order(obj.up[7]->id, 1);
    obj.down[2]->id = change_order(obj.down[2]->id, 1);
    obj.front[5]->id = change_order(obj.front[5]->id, 1);
    obj.front[4]->id = change_order(obj.front[4]->id, 1);

    obj.up[8]->id = change_order(obj.up[8]->id, 2);
    obj.down[1]->id = change_order(obj.down[1]->id, 2);
    obj.up[6]->id = change_order(obj.up[6]->id, 3);
    obj.down[3]->id = change_order(obj.down[3]->id, 3);
}

void updateRightOrientation()
{
    obj.up[8]->id = change_order(obj.up[8]->id, 3);
    obj.up[3]->id = change_order(obj.up[3]->id, 2);
    obj.down[3]->id = change_order(obj.down[3]->id, 2);
    obj.down[8]->id = change_order(obj.down[8]->id, 3);
}

void updateLeftOrientation()
{
    obj.down[1]->id = change_order(obj.down[1]->id, 3);
    obj.up[1]->id = change_order(obj.up[1]->id, 3);
    obj.up[6]->id = change_order(obj.up[6]->id, 2);
    obj.down[6]->id = change_order(obj.down[6]->id, 2);
}

void updateBackOrientation()
{
    obj.up[2]->id = change_order(obj.up[2]->id, 1);
    obj.down[7]->id = change_order(obj.down[7]->id, 1);
    obj.back[5]->id = change_order(obj.back[5]->id, 1);
    obj.back[4]->id = change_order(obj.back[4]->id, 1);

    obj.up[1]->id = change_order(obj.up[1]->id, 2);
    obj.down[8]->id = change_order(obj.down[8]->id, 2);
    obj.up[3]->id = change_order(obj.up[3]->id, 3);
    obj.down[6]->id = change_order(obj.down[6]->id, 3);
}


int main()
{
  

    repeticiones = 0;
    //cubo obj;
    obj.cubos_front(cube2, cube10, cube3, cube5, cube9, cube6, cube8, cube4, cube7);
    obj.cubos_back(cube17, cube13, cube18, cube19, cube14, cube20, cube15, cube22, cube21);
    obj.cubos_up(cube26, cube19, cube18, cube13, cube24, cube12, cube10, cube3, cube5);
    obj.cubos_down(cube27, cube8, cube4, cube7, cube25, cube16, cube21, cube22, cube15);
    obj.cubos_right(cube11, cube5, cube12, cube13, cube6, cube14, cube7, cube16, cube15);
    obj.cubos_left(cube23, cube19, cube24, cube10, cube20, cube9, cube21, cube25, cube8);
    obj.cubos_mid(cube1, cube9, cube2, cube6, cube23, cube11, cube20, cube17, cube14);


    cout << " Para Camara presionar teclas AWSD\n para perspectiva presionar teclas RFV\n Para cambiar vector UP  presionar teclas TGB\n Para expandir/contraer presionar teclas NM" << endl;
    cout << " Para mover el cubo FBLRUD --> presionar teclas 123456\n Para rotar el cubo horizontalmente presionar tecla U, vertical tecla I" << endl;
    cout << "La camara se mueve respecto al punto (0, 0, 0)" << endl;

    auto t_start = std::chrono::high_resolution_clock::now();
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    // --------------------
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
 
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetScrollCallback(window, scroll_callback);

    // tell GLFW to capture our mouse
   // glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // configure global opengl state    MODIFICADO
    // -----------------------------
    // Enable depth test
    glEnable(GL_DEPTH_TEST);
    // Accept fragment if it closer to the camera than the former one
    glDepthFunc(GL_LESS);
    /* select clearing color 	*/
    glClearColor(0.0, 1.0, 1.0, 0.0);

    // build and compile our shader zprogram
    // ------------------------------------
   Shader ourShader("C://Users/Abel/Desktop/grafica_labo/GLFW_GLAD_GLUT_GLEW_cmake_project/src/E_Look//camera.vs", "C://Users/Abel/Desktop/grafica_labo/GLFW_GLAD_GLUT_GLEW_cmake_project/src/E_Look//camera.fs");


    glGenVertexArrays(165, VAO);
    glGenBuffers(165, VBO);

    i_1();
    /// 1-> 0.0,0.5     2->0.33,0.5     3->0.666,0.5
    /// 4-> 0.0,0.0     5->0.33,0.0     6->0.666,0.0    10->0.0,0.0
    texture_1(indices10, indices10, indices10, indices10, indices10, indices10, cube1.caras, cube1);
   //texture_1(indices10, indices10, indices10, indices10, indices10, indices10, cube1.caras, cube1, 0.0f, 0.0f);
    //FRONT
    texture_2(indices10, indices10, indices10, indices10, indices10, indices5, cube2.caras, cube2);
    texture_3(indices4, indices10, indices10, indices10, indices10, indices4, cube3.caras, cube3);
    texture_4(indices10, indices10, indices10, indices10, indices4, indices6, cube4.caras, cube4);
    texture_5(indices7, indices10, indices10, indices1, indices10, indices1, cube5.caras, cube5);
    texture_6(indices10, indices10, indices10, indices4, indices10, indices2, cube6.caras, cube6);
    texture_7(indices10, indices10, indices10, indices7, indices1, indices3, cube7.caras, cube7);
    texture_8(indices10, indices1, indices10, indices10, indices7, indices9, cube8.caras, cube8);
    texture_9(indices10, indices4, indices10, indices10, indices10, indices8, cube9.caras, cube9);
    texture_10(indices1, indices7, indices10, indices10, indices10, indices7, cube10.caras, cube10);
    //RIGHT
    texture_11(indices10, indices10, indices10, indices5, indices10, indices10, cube11.caras, cube11);
    texture_12(indices8, indices10, indices10, indices2, indices10, indices10, cube12.caras, cube12);
    texture_13(indices9, indices10, indices1, indices3, indices10, indices10, cube13.caras, cube13);
    texture_14(indices10, indices10, indices2, indices6, indices10, indices10, cube14.caras, cube14);
    texture_15(indices10, indices10, indices3, indices9, indices3, indices10, cube15.caras, cube15);
    texture_16(indices10, indices10, indices10, indices8, indices2, indices10, cube16.caras, cube16);
    ///BACK
    /// 1-> 0.0,0.5     2->0.33,0.5     3->0.666,0.5
    /// 4-> 0.0,0.0     5->0.33,0.0     6->0.666,0.0    10->0.0,0.0
    texture_17(indices10, indices10, indices5, indices10, indices10, indices10, cube17.caras, cube17);
    texture_18(indices6, indices10, indices4, indices10, indices10, indices10, cube18.caras, cube18);
    texture_19(indices3, indices9, indices7, indices10, indices10, indices10, cube19.caras, cube19);
    texture_20(indices10, indices6, indices8, indices10, indices10, indices10, cube20.caras, cube20);
    texture_21(indices10, indices3, indices9, indices10, indices9, indices10, cube21.caras, cube21);
    texture_22(indices10, indices10, indices6, indices10, indices6, indices10, cube22.caras, cube22);
    ///left
    texture_23(indices10, indices5, indices10, indices10, indices10, indices10, cube23.caras, cube23);
    ///               L/UP         U,         B,         R         F         D
    texture_24(indices2, indices8, indices10, indices10, indices10, indices10, cube24.caras, cube24);
    texture_25(indices10, indices2, indices10, indices10, indices8, indices10, cube25.caras, cube25);
    
    texture_26(indices5, indices10, indices10, indices10, indices10, indices10, cube26.caras, cube26);

    texture_27(indices10, indices10, indices10, indices10, indices5, indices10, cube27.caras, cube27);

    string p1 = "LETRAS.jpg";
    add_texture(texture1, p1);
    string p2 = "blanco.jpg";
    string p3 = "Awesome.png";
    //string p4 = "naranja.jpg";
    //string p5 = "rojo.jpg";
    //string p6 = "azul.jpg";
    //string p7 = "verde.jpg";
    add_texture(texture2, p2);
    add_texture(texture3, p3);
    //add_texture(texture4, p4);
    //add_texture(texture5, p5);
    //add_texture(texture6, p6);
    //add_texture(texture7, p7);


    // tell opengl for each sampler to which texture unit it belongs to (only has to be done once)
    // -------------------------------------------------------------------------------------------
    ourShader.use();
    ourShader.setInt("texture1", 0);
    //ourShader.setInt("texture2", 1);
   
    framebuffer_size_callback(window, 500, 500);
    for (int i = 0; i < 102; ++i)
        obj.inpansion();
    // render loop
    // -----------
    while (!glfwWindowShouldClose(window))
    {
        // per-frame time logic
        // --------------------
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        // input
        // -----
        processInput(window);

        // render
            r+=0.0001f;
        if (r > 0.9)
            r = 0.0f;
        
            g+=0.0001f;
        if (g > 0.9f)
            g = 0.0f;

        glClearColor(r, g, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // bind textures on corresponding texture units
        glActiveTexture(GL_TEXTURE0);
        //glBindTexture(GL_TEXTURE_2D, texture1);
        //glActiveTexture(GL_TEXTURE1);
        //glBindTexture(GL_TEXTURE_2D, texture2);


        // activate shader
        ourShader.use();

        
        projection = glm::perspective(glm::radians(angle_fov), plano_ancho, plano_uno, plano_dos);
        ourShader.setMat4("projection", projection);


        view = glm::lookAt(cameraPos +3.0f, cameraPos + cameraFront, cameraUp);
        ourShader.setMat4("view", view);
        projectionPos = glGetUniformLocation(ourShader.ID, "projection");
        modelviewPos = glGetUniformLocation(ourShader.ID,  "view");
        




        auto t_now = std::chrono::high_resolution_clock::now();
        float time = std::chrono::duration_cast<std::chrono::duration<float>>(t_now - t_start).count();
       

        bind_data(27, 0, cube1.caras);
        bind_data(27, 6, cube2.caras);
        bind_data(27, 12, cube3.caras);
        bind_data(27, 18, cube4.caras);
        bind_data(27, 24, cube5.caras);
        bind_data(27, 30, cube6.caras);
        bind_data(27, 36, cube7.caras);
        bind_data(27, 42, cube8.caras);
        bind_data(27, 48, cube9.caras);
        bind_data(27, 54, cube10.caras);
        bind_data(27, 60, cube11.caras);
        bind_data(27, 66, cube12.caras);
        bind_data(27, 72, cube13.caras);
        bind_data(27, 78, cube14.caras);
        bind_data(27, 84, cube15.caras);
        bind_data(27, 90, cube16.caras);
        bind_data(27, 96, cube17.caras);
        bind_data(27, 102, cube18.caras);
        bind_data(27, 108, cube19.caras);
        bind_data(27, 114, cube20.caras);
        bind_data(27, 120, cube21.caras);
        bind_data(27, 126, cube22.caras);
        bind_data(27, 132, cube23.caras);
        bind_data(27, 138, cube24.caras);
        bind_data(27, 144, cube25.caras);
        bind_data(27, 150, cube26.caras);
        bind_data(27, 156, cube27.caras);      

        render(0, 162, ourShader, texture1);
        //render(0, 60, ourShader, texture2);

        float angulo = 10.0f;
        if (F) {
            animacion(F, contador_Front, angulo, pfun, obj);
            obj.rotatefrontupdate();
            updateFrontOrientation();
        }
        if (B) {
            animacion(B, contador_Back, angulo, pfun, obj);
            obj.rotatebackupdate();
            updateBackOrientation();
        }
         if (L) {
            animacion(L, contador_Left, angulo,pfun, obj);
            obj.rotateleftupdate(); ///ojo
            updateLeftOrientation();
        }
         if (R) {
            animacion(R, contador_Right, angulo, pfun, obj);
            obj.rotaterightupdate();
            updateRightOrientation();
        }
         if (U) {
            animacion(U, contador_Up, angulo, pfun, obj);
            obj.rotateupupdate();
        }
         if (D) {
            animacion(D, contador_Down, angulo, pfun, obj);
            obj.rotatedownupdate();
        }

        /**
         if (final_ani) {
             cout << "expandir\n";
             obj.LEFT(1.0f);
           //  obj.RIGHT(45.0f);
             final_ani = false;
         }
         /*
         if (VV) {
           //  ani_ver(VV, contadorG, 10.0f);
         }
         */
        mover(0);

       
        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
        // -------------------------------------------------------------------------------
        glfwSwapBuffers(window);
        glfwPollEvents();
        Sleep(50); ///50 milisegundos
    }

    // optional: de-allocate all resources once they've outlived their purpose:
    // ------------------------------------------------------------------------
    glDeleteVertexArrays(1, VAO);
    glDeleteBuffers(1, VBO);

    glfwDestroyWindow(window);
    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    Deletei1();
    glfwTerminate();
    return 0;
}


int cont = 0;
std::vector<int> Movimientos;
float angulo = 10.0f;

void mover(int movimiento = 0)
{
    int v = 10;
    if (movimiento != 0) {
        Movimientos.push_back(movimiento);
    }
    if (Movimientos.size() != 0) {
        switch (Movimientos[0])
        {
        case 1:
            obj.rotateright(angulo);
            Sleep(v); ///50 milisegundos
            cont++;
            break;
        case 2:
            obj.rotateleft(angulo); Sleep(v); ///50 milisegundos
            cont++;
            break;
        case 3:
            obj.rotateup(angulo); Sleep(v); ///50 milisegundos
            cont++;
            break;
        case 4:
            obj.rotatedown(angulo); Sleep(v); ///50 milisegundos
            cont++;
            break;
        case 5:
            obj.rotatefront(angulo); Sleep(v); ///50 milisegundos
            cont++;
            break;
        case 6:
            obj.rotateback(angulo); Sleep(v); ///50 milisegundos
            cont++;
            break;
        default:
            //Sleep(50); ///50 milisegundos
            break;
        }
    }
    if (cont == 9) {
        cont = 0;
        switch (Movimientos[0])
        {
        case 1:
            obj.rotaterightupdate();
            updateRightOrientation();
            break;
        case 2:
            obj.rotateleftupdate(); 
            updateLeftOrientation();
            break;
        case 3:
            obj.rotateupupdate();
            break;
        case 4:
            obj.rotatedownupdate();
            break;
        case 5:
            obj.rotatefrontupdate();
            updateFrontOrientation();
            break;
        case 6:
            obj.rotatebackupdate();
            updateBackOrientation();
            break;

        default:
            break;
        }
        Movimientos.erase(Movimientos.begin());
    }
}


vector<string> cubo_solve() {
    string goal[] = { "UF", "UR", "UB", "UL",   
                   "DF", "DR", "DB", "DL",      
                   "FR", "FL",                  
                   "BR", "BL",                  
                   "UFR", "URB", "UBL", "ULF",  
                   "DRF", "DFL", "DLB", "DBR" };

    string start[] = { obj.up[7]->id, obj.up[5]->id, obj.up[2]->id, obj.up[4]->id,
                  obj.down[2]->id, obj.down[5]->id, obj.down[7]->id, obj.down[4]->id,
                  obj.front[5]->id, obj.front[4]->id,
                  obj.back[4]->id, obj.back[5]->id,
                  obj.up[8]->id, obj.up[3]->id, obj.up[1]->id, obj.up[6]->id,
                  obj.down[3]->id, obj.down[1]->id, obj.down[6]->id, obj.down[8]->id };

    vector<string> moves(solve(start, goal));
    for (auto i : moves)
        cout << i << " ";

    for (unsigned int i = 0; i < moves.size(); i++)
    {
        switch (moves[i][0])
        {
        case 'R':
            switch (moves[i][1])
            {
            case '1':
                mover(1);
                break;
            case '2':
                mover(1);// Sleep(10);
                mover(1);
                break;
            case '3':

                mover(1); //Sleep(10);
                mover(1); //Sleep(10);
                mover(1);
               
                break;
            }
            break;

        case 'L':
            switch (moves[i][1])
            {
            case '1':
                mover(2);
                break;
            case '2':
                mover(2);
                mover(2);
                break;
            case '3':
                mover(2);
                mover(2);
                mover(2);
                break;
            }

            break;

        case 'U':
            switch (moves[i][1])
            {
            case '1':
                mover(3);
                break;
            case '2':
                mover(3);
                mover(3);
                break;
            case '3':
                mover(3);
                mover(3);
                mover(3);
                break;
            }

            break;

        case 'D':
            switch (moves[i][1])
            {
            case '1':
                mover(4);
                break;
            case '2':
                mover(4);
                mover(4);
                break;
            case '3':
                mover(4);
                mover(4);
                mover(4);
                break;
            }
            break;

        case 'F':
            switch (moves[i][1])
            {
            case '1':
                mover(5);
                break;
            case '2':
                mover(5);
                mover(5);
                break;
            case '3':
                mover(5);
                mover(5);
                mover(5);
                break;
            }
            break;

        case 'B':
            switch (moves[i][1])
            {
            case '1':
                mover(6);
                break;
            case '2':
                mover(6);
                mover(6);
                break;
            case '3':
                mover(6);
                mover(6);
                mover(6);
                break;
            }
            break;
        }
    }
    /***


        if (moves[i][0] == 'R') {
            if (moves[i][1] == '1') {
                mover(1);

            }
            else if (moves[i][1] == '2') {
                mover(1); mover(1);

            }
            else if (moves[i][1] == '3') {
                mover(1); mover(1); mover(1);

            }
        }
        else if (moves[i][0] == 'L') {
            if (moves[i][1] == '1') {
                mover(2);

            }
            else if (moves[i][1] == '2') {
                mover(2); mover(2);
            }
            else if (moves[i][1] == '3') {
                mover(2); mover(2); mover(2);

            }
        }
        else if (moves[i][0] == 'U') {
            if (moves[i][1] == '1') {
                mover(3);

            }
            else if (moves[i][1] == '2') {
                mover(3); mover(3);
            }
            else if (moves[i][1] == '3') {
                mover(3); mover(3); mover(3);

            }
        }
        else if (moves[i][0] == 'D') {
            if (moves[i][1] == '1') {
                mover(4);

            }
            else if (moves[i][1] == '2') {
                mover(4); mover(4);
            }
            else if (moves[i][1] == '3') {
                mover(4); mover(4); mover(4);

            }
        }
        else if (moves[i][0] == 'F') {
            if (moves[i][1] == '1') {
                mover(5);

            }
            else if (moves[i][1] == '2') {
                mover(5); mover(5);
            }
            else if (moves[i][1] == '3') {
                mover(5); mover(5); mover(5);

            }
        }
        else if (moves[i][0] == 'B') {
            if (moves[i][1] == '1') {
                mover(6);
            }
            else if (moves[i][1] == '2') {
                mover(6); mover(6);
            }
            else if (moves[i][1] == '3') {
                mover(6); mover(6); mover(6);
            }
        }
        
     }*/
    return moves;
}

int contExpancion = 0;
// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow* window)
{
    //printf("camara %d %d %d\n ", cameraPos.x, cameraPos.y, cameraPos.z);
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    if (glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS) {
        plano_ancho -= 0.01f;
        if (plano_ancho < 0.0033f )
            plano_ancho = 4.9f;
    }
    if (glfwGetKey(window, GLFW_KEY_F) == GLFW_PRESS) {
        plano_uno += 0.01f;
          
        if (plano_uno > 7.0f)
            plano_uno = 1.0f;
    }
    if (glfwGetKey(window, GLFW_KEY_V) == GLFW_PRESS) {
        plano_dos -= 0.03f;
        if (plano_dos < 1.5f)
            plano_dos = 12.0f;
    }
    

    
    if (glfwGetKey(window, GLFW_KEY_1) == GLFW_PRESS) {
        F = true;
        pfun = &cubo::rotatefront;

       // obj.rotatefrontupdate();
        //updateFrontOrientation();
    }

    if (glfwGetKey(window, GLFW_KEY_2) == GLFW_PRESS) {
        B = true;
        pfun = &cubo::rotateback;
       // obj.rotatebackupdate();
       // updateBackOrientation();
    }
    if (glfwGetKey(window, GLFW_KEY_3) == GLFW_PRESS) {
        L = true;
        pfun = &cubo::rotateleft;

       // obj.rotateleftupdate(); ///ojo
       // updateLeftOrientation();
    }
    if (glfwGetKey(window, GLFW_KEY_4) == GLFW_PRESS) {
        R = true;
        pfun = &cubo::rotateright;

       // obj.rotaterightupdate();
      //  updateRightOrientation();
    }
    if (glfwGetKey(window, GLFW_KEY_5) == GLFW_PRESS) {
        U = true;
        pfun = &cubo::rotateup;

        //obj.rotateupupdate();
    }
    if (glfwGetKey(window, GLFW_KEY_6) == GLFW_PRESS) {
        D = true;
        pfun = &cubo::rotatedown;

        // obj.rotatedownupdate();
    }

    if (glfwGetKey(window, GLFW_KEY_ENTER) == GLFW_PRESS) {
       // ismove = true;
        movimientos = cubo_solve();

    }

    float cameraSpeed = 1.5 * deltaTime;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        cameraPos += cameraSpeed * cameraFront;
        //cameraPos.z -= cameraSpeed;
    }
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
        cameraPos -= cameraSpeed * cameraFront;
        //cameraPos.z += cameraSpeed;
    }
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
        //cameraPos.x -= cameraSpeed;
    }
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
        //cameraPos.x += cameraSpeed;


    if (glfwGetKey(window, GLFW_KEY_U) == GLFW_PRESS) 
        HH = true;
    if (glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS)
        VV = true;
    if (glfwGetKey(window, GLFW_KEY_J) == GLFW_PRESS) {
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
            mover(rand() % 7);
    }
    if (glfwGetKey(window, GLFW_KEY_M) == GLFW_PRESS) {
        //final_ani = true;
        if (contExpancion <= 400) {
            obj.expansion();
            contExpancion++;
        }
    }
    if (glfwGetKey(window, GLFW_KEY_N) == GLFW_PRESS) {
        //final_ani = true;
        if (contExpancion >= 1) {
            obj.inpansion();
            contExpancion--;
        }
    }


    if (glfwGetKey(window, GLFW_KEY_T) == GLFW_PRESS) {
        cameraUp = glm::vec3(1.0f, 0.0f, 0.0f);
    }
    if (glfwGetKey(window, GLFW_KEY_G) == GLFW_PRESS) {
        cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
    }
    if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) {
        cameraUp = glm::vec3(0.0f, 0.0f, 1.0f);
    }

}



// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
    if (height > 0)
    {
        projection = glm::perspective(30.0f / 180.0f * glm::pi<float>(), (GLfloat)width / (GLfloat)height, 1.0f, 100.0f);
       glUniformMatrix4fv(glGetUniformLocation(projectionPos, "projection"), 1, GL_FALSE, &projection[0][0]);
    }


}

// glfw: whenever the mouse moves, this callback is called
// -------------------------------------------------------
void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    if (firstMouse)
    {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }
    
    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top
    lastX = xpos;
    lastY = ypos;

    float sensitivity = 0.1f; // change this value to your liking
    xoffset *= sensitivity;
    yoffset *= sensitivity;

    yaw += xoffset;
    pitch += yoffset;

    
    // make sure that when pitch is out of bounds, screen doesn't get flipped
    if (pitch > 89.0f)
        pitch = 89.0f;
    if (pitch < -89.0f)
        pitch = -89.0f;
    

    glm::vec3 front;
    front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    front.y = sin(glm::radians(pitch));
    front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    cameraFront = glm::normalize(front);
}

// glfw: whenever the mouse scroll wheel scrolls, this callback is called
// ----------------------------------------------------------------------
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{ 
    angle_fov -= (float)yoffset;
    if (angle_fov < 1.0f)
        angle_fov = 1.0f;
    if (angle_fov > 45.0f)
        angle_fov = 45.0f;
}