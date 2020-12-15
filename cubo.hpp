#pragma once

#include "cubito.hpp"
#include <math.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <windows.h>    ///sleep

#define PI 3.14159265
float offsett = 0.002f;
float *ptr;
float matriz_rotaciones[4][4];// = { {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1} };
int a = 4;
int b = 1;

void update_value(float x, float y, float z){
	ptr[0] = x;
	ptr[1] = y;
	ptr[2] = z;
}


void multiplicacion(float **resultado)
{

	for (int i = 0; i < a; i++) {
		for (int o = 0; o < b; o++) {
			for (int t = 0; t < a; t++) {
				resultado[i][o] += (matriz_rotaciones[i][t] * ptr[t]);
			}
		}
	}

}

/**
float *center1;
float *center2;
float *center3;
float *center4;
float *center5;
float *center6;
float *center7;
float *center8;
float *center9;
float *center10;
float *center11;
float *center12;
float *center13;
float *center14;
float *center15;
float *center16;
float *center17;
float *center18;
float *center19;
float *center20;
float *center21;
float *center22;
float *center23;
float *center24;
float *center25;
float *center26;
float *center27;
*/

float center1[3] = { 0.0, 0.0, 0.0 };
float center2[3] = { 0.0, 0.0, 0.21 };
float center3[3] = { 0.0, 0.21, 0.21 };
float center4[3] = { 0.0, -0.21, 0.21 };
float center5[3] = { 0.21, 0.21, 0.21 };
float center6[3] = { 0.21, 0.0, 0.21 };
float center7[3] = { 0.21, -0.21, 0.21 };
float center8[3] = { -0.21, -0.21, 0.21 };
float center9[3] = { -0.21, 0.0, 0.21 };
float center10[3] = { -0.21, 0.21, 0.21 };
float center11[3] = { 0.21, 0.0, 0.0 };
float center12[3] = { 0.21, 0.21, 0.0 };
float center13[3] = { 0.21, 0.21, -0.21 };
float center14[3] = { 0.21, 0.0, -0.21 };
float center15[3] = { 0.21, -0.21, -0.21 };
float center16[3] = { 0.21, -0.21, 0.0 };
float center17[3] = { 0.0, 0.0, -0.21 };
float center18[3] = { 0.0, 0.21, -0.21 };
float center19[3] = { -0.21, 0.21, -0.21 };
float center20[3] = { -0.21, 0.0, -0.21 };
float center21[3] = { -0.21, -0.21, -0.21 };
float center22[3] = { 0.0, -0.21, -0.21 };
float center23[3] = { -0.21, 0.0, 0.0 };
float center24[3] = { -0.21, 0.21, 0.0 };
float center25[3] = { -0.21, -0.21, 0.0 };
float center26[3] = { 0.0, 0.21, 0.0 };
float center27[3] = { 0.0, -0.21, 0.0 };


class cubo{
    public:
	glm::mat4 model = glm::mat4(1.0f);

	cubo() {
		ptr = new float[4];
		ptr[3] = 1;
		//center1 = new float[3];

		/**
		float center2[3] = { 0.0, 0.0, 0.21 };
		float center3[3] = { 0.0, 0.21, 0.21 };
		float center4[3] = { 0.0, -0.21, 0.21 };
		float center5[3] = { 0.21, 0.21, 0.21 };
		float center6[3] = { 0.21, 0.0, 0.21 };
		float center7[3] = { 0.21, -0.21, 0.21 };
		float center8[3] = { -0.21, -0.21, 0.21 };
		float center9[3] = { -0.21, 0.0, 0.21 };
		float center10[3] = { -0.21, 0.21, 0.21 };
		float center11[3] = { 0.21, 0.0, 0.0 };
		float center12[3] = { 0.21, 0.21, 0.0 };
		float center13[3] = { 0.21, 0.21, -0.21 };
		float center14[3] = { 0.21, 0.0, -0.21 };
		float center15[3] = { 0.21, -0.21, -0.21 };
		float center16[3] = { 0.21, -0.21, 0.0 };
		float center17[3] = { 0.0, 0.0, -0.21 };
		float center18[3] = { 0.0, 0.21, -0.21 };
		float center19[3] = { -0.21, 0.21, -0.21 };
		float center20[3] = { -0.21, 0.0, -0.21 };
		float center21[3] = { -0.21, -0.21, -0.21 };
		float center22[3] = { 0.0, -0.21, -0.21 };
		float center23[3] = { -0.21, 0.0, 0.0 };
		float center24[3] = { -0.21, 0.21, 0.0 };
		float center25[3] = { -0.21, -0.21, 0.0 };
		float center26[3] = { 0.0, 0.21, 0.0 };
		float center27[3] = { 0.0, -0.21, 0.0 };
		*/

		cout << "ini center\n";
	}

	void rotate_x(float);
	void rotate_y(float);
	void rotate_z(float);
	cubito *front[9];
	cubito *back[9];
	cubito *up[9];
	cubito *down[9];
	cubito *right[9];
	cubito *left[9];
	cubito *middle[9];

	void translatte(float tx, float ty, float tz);
	void Fexpandir(int i, float x, float y, float z, cubito* cubito[9]);
	void expansion();
	void inpansion();
	void cubos_mid(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);

	void cubos_front(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);
	void cubos_back(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);
	void cubos_up(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);
	void cubos_down(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);
	void cubos_right(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);
	void cubos_left(cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&, cubito&);



	void rotateright(float);
	void rotaterightupdate();

	void rotateleft(float);
	void rotateleftupdate();

	void rotateup(float);
	void rotateupupdate();

	void rotatedown(float);
	void rotatedownupdate();

	void rotatefront(float);
	void rotatefrontupdate();

	void rotateback(float);
	void rotatebackupdate();


	void RIGHT(float angle);
	void LEFT(float angle);

};

void cubo::cubos_front(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	front[0] = &cubo1;
	front[1] = &cubo2;
	front[2] = &cubo3;
	front[3] = &cubo4;
	front[4] = &cubo5;
	front[5] = &cubo6;
	front[6] = &cubo7;
	front[7] = &cubo8;
	front[8] = &cubo9;
}

void cubo::cubos_mid(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	middle[0] = &cubo1;
	middle[1] = &cubo2;
	middle[2] = &cubo3;
	middle[3] = &cubo4;
	middle[4] = &cubo5;
	middle[5] = &cubo6;
	middle[6] = &cubo7;
	middle[7] = &cubo8;
	middle[8] = &cubo9;
}

void cubo::cubos_back(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	back[0] = &cubo1;
	back[1] = &cubo2;
	back[2] = &cubo3;
	back[3] = &cubo4;
	back[4] = &cubo5;
	back[5] = &cubo6;
	back[6] = &cubo7;
	back[7] = &cubo8;
	back[8] = &cubo9;
}

void cubo::cubos_up(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	up[0] = &cubo1;
	up[1] = &cubo2;
	up[2] = &cubo3;
	up[3] = &cubo4;
	up[4] = &cubo5;
	up[5] = &cubo6;
	up[6] = &cubo7;
	up[7] = &cubo8;
	up[8] = &cubo9;
}

void cubo::cubos_down(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	down[0] = &cubo1;
	down[1] = &cubo2;
	down[2] = &cubo3;
	down[3] = &cubo4;
	down[4] = &cubo5;
	down[5] = &cubo6;
	down[6] = &cubo7;
	down[7] = &cubo8;
	down[8] = &cubo9;
}

void cubo::cubos_right(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	right[0] = &cubo1;
	right[1] = &cubo2;
	right[2] = &cubo3;
	right[3] = &cubo4;
	right[4] = &cubo5;
	right[5] = &cubo6;
	right[6] = &cubo7;
	right[7] = &cubo8;
	right[8] = &cubo9;
}

void cubo::cubos_left(cubito& cubo1, cubito& cubo2, cubito& cubo3, cubito& cubo4, cubito& cubo5, cubito& cubo6, cubito& cubo7, cubito& cubo8, cubito& cubo9) {
	left[0] = &cubo1;
	left[1] = &cubo2;
	left[2] = &cubo3;
	left[3] = &cubo4;
	left[4] = &cubo5;
	left[5] = &cubo6;
	left[6] = &cubo7;
	left[7] = &cubo8;
	left[8] = &cubo9;
}

void cubo::rotateback(float angle)
{
	model = glm::rotate(model, glm::radians(angle), glm::vec3(1.0f, 1.0f, 1.0f));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {

				update_value(back[i]->caras[j][k][0], back[i]->caras[j][k][1], back[i]->caras[j][k][2]);
				rotate_z(angle);
				
				back[i]->caras[j][k][0] = ptr[0];
				back[i]->caras[j][k][1] = ptr[1];
				back[i]->caras[j][k][2] = ptr[2];


			}
		}
	}

}

void cubo::rotatefront(float angle)
{
	angle = angle * -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {

				update_value(front[i]->caras[j][k][0], front[i]->caras[j][k][1], front[i]->caras[j][k][2]);
				rotate_z(angle);
				front[i]->caras[j][k][0] = ptr[0];
				front[i]->caras[j][k][1] = ptr[1];
				front[i]->caras[j][k][2] = ptr[2];
			}
		}
	}

}
void cubo::rotateright(float angle)
{
	angle = angle * -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {

				update_value(right[i]->caras[j][k][0], right[i]->caras[j][k][1], right[i]->caras[j][k][2]);
				rotate_x(angle);
				right[i]->caras[j][k][0] = ptr[0];
				right[i]->caras[j][k][1] = ptr[1];
				right[i]->caras[j][k][2] = ptr[2];
			}
		}
	}

}
void cubo::rotateleft(float angle)
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {

				update_value(left[i]->caras[j][k][0], left[i]->caras[j][k][1], left[i]->caras[j][k][2]);
				rotate_x(angle);
				left[i]->caras[j][k][0] = ptr[0];
				left[i]->caras[j][k][1] = ptr[1];
				left[i]->caras[j][k][2] = ptr[2];
			}
		}
	}

}
void cubo::rotateup(float angle)
{
	angle = angle * -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {

				update_value(up[i]->caras[j][k][0], up[i]->caras[j][k][1], up[i]->caras[j][k][2]);
				rotate_y(angle);
				up[i]->caras[j][k][0] = ptr[0];
				up[i]->caras[j][k][1] = ptr[1];
				up[i]->caras[j][k][2] = ptr[2];
			}
		}
	}

}
void cubo::rotatedown(float angle)
{
	model = glm::rotate(model, glm::radians(angle), glm::vec3(1.0f, 1.0f, 1.0f));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {

				update_value(down[i]->caras[j][k][0], down[i]->caras[j][k][1], down[i]->caras[j][k][2]);
				rotate_y(angle);
				down[i]->caras[j][k][0] = ptr[0];
				down[i]->caras[j][k][1] = ptr[1];
				down[i]->caras[j][k][2] = ptr[2];
			}
		}
	}

}

void cubo::rotaterightupdate() {
	cubito* temp1 = front[3];
	cubito* temp2 = front[5];
	cubito* temp3 = front[8];

	cubito* temp4 = back[1];
	cubito* temp5 = back[4];
	cubito* temp6 = back[6];

	cubos_front(*front[0], *front[1], *front[2], *down[3], *front[4], *down[5], *front[6], *front[7], *down[8]);
	cubos_back(*back[0], *up[8], *back[2], *back[3], *up[5], *back[5], *up[3], *back[7], *back[8]);
	cubos_up(*up[0], *up[1], *up[2], *temp1, *up[4], *temp2, *up[6], *up[7], *temp3);
	cubos_down(*down[0], *down[1], *down[2], *temp6, *down[4], *temp5, *down[6], *down[7], *temp4);
	cubos_right(*right[0], *right[6], *right[4], *right[1], *right[7], *right[2], *right[8], *right[5], *right[3]);
}
void cubo::rotateleftupdate(){
	cubito* temp1 = back[3];
	cubito* temp2 = back[5];
	cubito* temp3 = back[8];

	cubito* temp4 = front[1];
	cubito* temp5 = front[4];
	cubito* temp6 = front[6];


	cubos_front(*front[0], *up[1], *front[2], *front[3], *up[4], *front[5], *up[6], *front[7], *front[8]);
	cubos_back(*back[0], *back[1], *back[2], *down[6], *back[4], *down[4], *back[6], *back[7], *down[1]);
	cubos_up(*up[0], *temp3, *up[2], *up[3], *temp2, *up[5], *temp1, *up[7], *up[8]);
	cubos_down(*down[0], *temp4, *down[2], *down[3], *temp5, *down[5], *temp6, *down[7], *down[8]);
	cubos_left(*left[0], *left[6], *left[4], *left[1], *left[7], *left[2], *left[8], *left[5], *left[3]);
}
void cubo::rotateupupdate() {
	cubito* temp1 = front[1];
	cubito* temp2 = front[2];
	cubito* temp3 = front[3];

	cubito* temp4 = back[1];
	cubito* temp5 = back[2];
	cubito* temp6 = back[3];

	cubos_front(*front[0], *right[1], *right[2], *right[3], *front[4], *front[5], *front[6], *front[7], *front[8]);

	cubos_back(*back[0], *left[1], *left[2], *left[3], *back[4], *back[5], *back[6], *back[7], *back[8]);

	cubos_left(*left[0], *temp1, *temp2, *temp3, *left[4], *left[5], *left[6], *left[7], *left[8]);

	cubos_right(*right[0], *temp4, *temp5, *temp6, *right[4], *right[5], *right[6], *right[7], *right[8]);

	cubos_up(*up[0], *up[6], *up[4], *up[1], *up[7], *up[2], *up[8], *up[5], *up[3]);
}
void cubo::rotatedownupdate(){
	cubito* temp1 = back[6];
	cubito* temp2 = back[7];
	cubito* temp3 = back[8];

	cubito* temp4 = front[6];
	cubito* temp5 = front[7];
	cubito* temp6 = front[8];

	cubos_front(*front[0], *front[1], *front[2], *front[3], *front[4], *front[5], *left[6], *left[7], *left[8]);
	cubos_back(*back[0], *back[1], *back[2], *back[3], *back[4], *back[5], *right[6], *right[7], *right[8]);
	cubos_left(*left[0], *left[1], *left[2], *left[3], *left[4], *left[5], *temp1, *temp2, *temp3);
	cubos_right(*right[0], *right[1], *right[2], *right[3], *right[4], *right[5], *temp4, *temp5, *temp6);
	cubos_down(*down[0], *down[6], *down[4], *down[1], *down[7], *down[2], *down[8], *down[5], *down[3]);
}
void cubo::rotatebackupdate(){
	cubito* temp1 = up[1];
	cubito* temp2 = up[2];
	cubito* temp3 = up[3];
	cubito* temp4 = down[6];
	cubito* temp5 = down[7];
	cubito* temp6 = down[8];

	cubos_up(*up[0], *right[3], *right[5], *right[8], *up[4], *up[5], *up[6], *up[7], *up[8]);
	cubos_down(*down[0], *down[1], *down[2], *down[3], *down[4], *down[5], *left[1], *left[4], *left[6]);
	cubos_left(*left[0], *temp3, *left[2], *left[3], *temp2, *left[5], *temp1, *left[7], *left[8]);
	cubos_right(*right[0], *right[1], *right[2], *temp6, *right[4], *temp5, *right[6], *right[7], *temp4);
	cubos_back(*back[0], *back[6], *back[4], *back[1], *back[7], *back[2], *back[8], *back[5], *back[3]);
}
void cubo::rotatefrontupdate() {
	cubito* temp1 = down[1];
	cubito* temp2 = down[2];
	cubito* temp3 = down[3];

	cubito* temp4 = up[6];
	cubito* temp5 = up[7];
	cubito* temp6 = up[8];

	cubos_up(*up[0], *up[1], *up[2], *up[3], *up[4], *up[5], *left[8], *left[5], *left[3]);
	cubos_down(*down[0], *right[6], *right[4], *right[1], *down[4], *down[5], *down[6], *down[7], *down[8]);
	cubos_left(*left[0], *left[1], *left[2], *temp1, *left[4], *temp2, *left[6], *left[7], *temp3);
	cubos_right(*right[0], *temp4, *right[2], *right[3], *temp5, *right[5], *temp6, *right[7], *right[8]);
	cubos_front(*front[0], *front[6], *front[4], *front[1], *front[7], *front[2], *front[8], *front[5], *front[3]);
}

void cubo::rotate_x(float teta)
{
	float** tmp = new float* [a];
	for (int i = 0; i < a; i++) {
		tmp[i] = new float[b];
		tmp[i][0] = 0;
	}
	matriz_rotaciones[0][0] = 1;
	matriz_rotaciones[0][1] = 0;
	matriz_rotaciones[0][2] = 0;
	matriz_rotaciones[1][0] = 0;
	matriz_rotaciones[1][1] = cos(teta * PI / 180);
	matriz_rotaciones[1][2] = -1 * sin(teta * PI / 180);
	matriz_rotaciones[2][0] = 0;
	matriz_rotaciones[2][1] = sin(teta * PI / 180);
	matriz_rotaciones[2][2] = cos(teta * PI / 180);

	multiplicacion(tmp);
	for (int i = 0; i < a; i++) {
		ptr[i] = tmp[i][0];
	}

	for (int i = 0; i < a; i++) {
		delete[] tmp[i];
	}
	delete[] tmp;
}

void cubo::rotate_y(float teta)
{
	float** tmp = new float* [a];
	for (int i = 0; i < a; i++) {
		tmp[i] = new float[b];
		tmp[i][0] = 0;
	}

	matriz_rotaciones[0][0] = cos(teta * PI / 180);
	matriz_rotaciones[0][1] = 0;
	matriz_rotaciones[0][2] = sin(teta * PI / 180);
	matriz_rotaciones[1][0] = 0;
	matriz_rotaciones[1][1] = 1;
	matriz_rotaciones[1][2] = 0;
	matriz_rotaciones[2][0] = -1 * sin(teta * PI / 180);
	matriz_rotaciones[2][1] = 0;
	matriz_rotaciones[2][2] = cos(teta * PI / 180);
		
	multiplicacion(tmp);
	for (int i = 0; i < a; i++) {
		ptr[i] = tmp[i][0];
	}

	for (int i = 0; i < a; i++) {
		delete tmp[i];
	}
	delete[] tmp;
}

void cubo::rotate_z(float teta)
{
	float** tmp = new float*[a];
	for (int i = 0; i < a; i++) {
		tmp[i] = new float[b];
		tmp[i][0] = 0;
	}

	matriz_rotaciones[0][0] = cos(teta * PI / 180);
	matriz_rotaciones[0][1] = -1 * sin(teta * PI / 180);
	matriz_rotaciones[0][2] = 0;
	matriz_rotaciones[1][0] = sin(teta * PI / 180);
	matriz_rotaciones[1][1] = cos(teta * PI / 180);
	matriz_rotaciones[1][2] = 0;
	matriz_rotaciones[2][0] = 0;
	matriz_rotaciones[2][1] = 0;
	matriz_rotaciones[2][2] = 1;

	multiplicacion(tmp);
	for (int i = 0; i < a; i++) {
		ptr[i] = tmp[i][0];
	}

	for (int i = 0; i < a; i++) {
		delete tmp[i];
	}
	delete[] tmp;
}


void cubo::RIGHT(float angle) {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				//ALL
				//front
				//back....
				
				
				update_value(down[i]->caras[j][k][0], down[i]->caras[j][k][1], down[i]->caras[j][k][2]);
				rotate_y(angle);
				down[i]->caras[j][k][0] = ptr[0];
				down[i]->caras[j][k][1] = ptr[1];
				down[i]->caras[j][k][2] = ptr[2];
			

				update_value(up[i]->caras[j][k][0], up[i]->caras[j][k][1], up[i]->caras[j][k][2]);
				rotate_y(angle);
				up[i]->caras[j][k][0] = ptr[0];
				up[i]->caras[j][k][1] = ptr[1];
				up[i]->caras[j][k][2] = ptr[2];
				
				
				update_value(middle[i]->caras[j][k][0], middle[i]->caras[j][k][1], middle[i]->caras[j][k][2]);
				rotate_y(angle);
				
				middle[i]->caras[j][k][0] = ptr[0];
				middle[i]->caras[j][k][1] = ptr[1];
				middle[i]->caras[j][k][2] = ptr[2];
				
			}
		}
	}

}


void cubo::LEFT(float angle) {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				//ALL
				//front
				//back....
				//update_value(down[i]->caras[j][k][0], down[i]->caras[j][k][1], down[i]->caras[j][k][2]);
				//rotate_x(-angle);
				float exa = 1.1f;
				down[i]->caras[j][k][0] += exa;
				down[i]->caras[j][k][1] += exa;
				down[i]->caras[j][k][2] += exa;

				update_value(up[i]->caras[j][k][0], up[i]->caras[j][k][1], up[i]->caras[j][k][2]);
				rotate_x(-angle);
				up[i]->caras[j][k][0] += exa;
				up[i]->caras[j][k][1] += exa;
				up[i]->caras[j][k][2] += exa;

				//update_value(middle[i]->caras[j][k][0], middle[i]->caras[j][k][1], middle[i]->caras[j][k][2]);
				//rotate_x(-angle);
				middle[i]->caras[j][k][0] += exa;
				middle[i]->caras[j][k][1] += exa;
				middle[i]->caras[j][k][2] += exa;

			}
		}
	}

}

void cubo::translatte(float tx, float ty, float tz) {
	float** tmp = new float* [a];
	for (int i = 0; i < a; i++) {
		tmp[i] = new float[b];
		tmp[i][0] = 0;
	}


	matriz_rotaciones[0][0] = 1;
	matriz_rotaciones[0][1] = 0;
	matriz_rotaciones[0][2] = 0;
	matriz_rotaciones[0][3] = 0;
	matriz_rotaciones[1][0] = 0;
	matriz_rotaciones[1][1] = 1;
	matriz_rotaciones[1][2] = 0;
	matriz_rotaciones[1][3] = 0;
	matriz_rotaciones[2][0] = 0;
	matriz_rotaciones[2][1] = 0;
	matriz_rotaciones[2][2] = 1;
	matriz_rotaciones[2][3] = 0;
	matriz_rotaciones[3][0] = 0;
	matriz_rotaciones[3][1] = 0;
	matriz_rotaciones[3][2] = 0;
	matriz_rotaciones[3][3] = 1;


	matriz_rotaciones[0][3] = tx;
	matriz_rotaciones[1][3] = ty;
	matriz_rotaciones[2][3] = tz;
	multiplicacion(tmp);
	for (int i = 0; i < a; i++) {
		ptr[i] = tmp[i][0];
	}
	matriz_rotaciones[0][3] = 0;
	matriz_rotaciones[1][3] = 0;
	matriz_rotaciones[2][3] = 0;

	//cout << resultado[0][0] << " " << resultado[1][0] << " " << resultado[2][0] << " " << resultado[3][0] << endl;
	for (int i = 0; i < a; i++) {
		delete tmp[i];
	}
	delete[] tmp;
}




void cubo::Fexpandir(int i, float x, float y, float z, cubito* cubito[9])
{
	for (int j = 0; j < 6; j++) {
		for (int k = 0; k < 6; k++) {
			update_value(cubito[i]->caras[j][k][0], cubito[i]->caras[j][k][1], cubito[i]->caras[j][k][2]);
			translatte(x, y, z);
			cubito[i]->caras[j][k][0] = ptr[0];
			cubito[i]->caras[j][k][1] = ptr[1];
			cubito[i]->caras[j][k][2] = ptr[2];
			//cubito[i]->caras[j][k][0] = 0.1;
			//cubito[i]->caras[j][k][1] = 0.1;
			//cubito[i]->caras[j][k][2] = 0.1;
		}
	}
}


void cubo::expansion()
{
	Fexpandir(0, -offsett, 0, 0, left);
	Fexpandir(1, -offsett, offsett, -offsett, left);
	Fexpandir(2, -offsett, offsett, 0, left);
	Fexpandir(3, -offsett, offsett, offsett, left);
	Fexpandir(4, -offsett, 0, -offsett, left);
	Fexpandir(5, -offsett, 0, offsett, left);
	Fexpandir(6, -offsett, -offsett, -offsett, left);
	Fexpandir(7, -offsett, -offsett, 0, left);
	Fexpandir(8, -offsett, -offsett, offsett, left);

	Fexpandir(0, offsett, 0, 0, right);
	Fexpandir(1, offsett, offsett, offsett, right);
	Fexpandir(2, offsett, offsett, 0, right);
	Fexpandir(3, offsett, offsett, -offsett, right);
	Fexpandir(4, offsett, 0, offsett, right);
	Fexpandir(5, offsett, 0, -offsett, right);
	Fexpandir(6, offsett, -offsett, offsett, right);
	Fexpandir(7, offsett, -offsett, 0, right);
	Fexpandir(8, offsett, -offsett, -offsett, right);

	Fexpandir(0, 0, 0, offsett, front);
	Fexpandir(2, 0, offsett, offsett, front);
	Fexpandir(7, 0, -offsett, offsett, front);

	Fexpandir(0, 0, 0, -offsett, back);
	Fexpandir(2, 0, offsett, -offsett, back);
	Fexpandir(7, 0, -offsett, -offsett, back);

	Fexpandir(0, 0, offsett, 0, up);

	Fexpandir(0, 0, -offsett, 0, down);
}

void cubo::inpansion()
{

	Fexpandir(0, offsett, 0, 0, left);
	Fexpandir(1, offsett, -offsett, offsett, left);
	Fexpandir(2, offsett, -offsett, 0, left);
	Fexpandir(3, offsett, -offsett, -offsett, left);
	Fexpandir(4, offsett, 0, offsett, left);
	Fexpandir(5, offsett, 0, -offsett, left);
	Fexpandir(6, offsett, offsett, offsett, left);
	Fexpandir(7, offsett, offsett, 0, left);
	Fexpandir(8, offsett, offsett, -offsett, left);

	Fexpandir(0, -offsett, 0, 0, right);
	Fexpandir(1, -offsett, -offsett, -offsett, right);
	Fexpandir(2, -offsett, -offsett, 0, right);
	Fexpandir(3, -offsett, -offsett, offsett, right);
	Fexpandir(4, -offsett, 0, -offsett, right);
	Fexpandir(5, -offsett, 0, offsett, right);
	Fexpandir(6, -offsett, offsett, -offsett, right);
	Fexpandir(7, -offsett, offsett, 0, right);
	Fexpandir(8, -offsett, offsett, offsett, right);

	Fexpandir(0, 0, 0, -offsett, front);
	Fexpandir(2, 0, -offsett, -offsett, front);
	Fexpandir(7, 0, offsett, -offsett, front);

	Fexpandir(0, 0, 0, offsett, back);
	Fexpandir(2, 0, -offsett, offsett, back);
	Fexpandir(7, 0, offsett, offsett, back);

	Fexpandir(0, 0, -offsett, 0, up);

	Fexpandir(0, 0, offsett, 0, down);
}