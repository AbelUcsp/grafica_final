#pragma once
#include "solver.hpp"


// <texturas>
// ------------------------------------------------------------------
//       |           |
//    ---2---+---+---0---
//       | 0 | 0 | 0 |        0     1     2       
//       +---+---+---+                   
//       | 0 FRONT 0 |        3     4     5
//       +---+---+---+                             
//       | 0 | 0 | 0 |        6     7     8
//    ---3---+---+---1---

class cubito{
    public:
        string id;
        float centro[3];
        float caras[6][6][5];

        cubito(float[3], string);

};

cubito::cubito(float centro[3], string id)
{
    this->id = id;
    ///     0   1   2   3   4   5   6   7   8
    caras[0][0][0] = centro[0] - 0.1;  /// 4   up
    caras[0][0][1] = centro[1] + 0.1;
    caras[0][0][2] = centro[2] + 0.1;
    caras[0][0][3] = 0.0f;     /// texture
    caras[0][0][4] = 1.0f;

    caras[0][1][0] = centro[0] + 0.1;  /// 4
    caras[0][1][1] = centro[1] + 0.1;
    caras[0][1][2] = centro[2] + 0.1;
    caras[0][1][3] = 0.0f;     /// texture
    caras[0][1][4] = 0.5f;

    caras[0][2][0] = centro[0] + 0.1;  /// 4
    caras[0][2][1] = centro[1] + 0.1;
    caras[0][2][2] = centro[2] - 0.1;
    caras[0][2][3] = 0.33f;     /// texture
    caras[0][2][4] = 0.5f;

    caras[0][3][0] = centro[0] - 0.1;  /// 4
    caras[0][3][1] = centro[1] + 0.1;
    caras[0][3][2] = centro[2] + 0.1;
    caras[0][3][3] = 0.0f;     /// texture
    caras[0][3][4] = 1.0f;

    caras[0][4][0] = centro[0] - 0.1;  /// 4
    caras[0][4][1] = centro[1] + 0.1;
    caras[0][4][2] = centro[2] - 0.1;
    //caras[0][4][3] = 0.0f;     /// texture
    //caras[0][4][4] = 1.0f;

    caras[0][5][0] = centro[0] + 0.1;  /// 4
    caras[0][5][1] = centro[1] + 0.1;
    caras[0][5][2] = centro[2] - 0.1;
 //   caras[0][5][3] = 0.33f;     /// texture
   // caras[0][5][4] = 0.5f;



    caras[1][0][0] = centro[0] - 0.1;  /// 0   left
    caras[1][0][1] = centro[1] - 0.1;
    caras[1][0][2] = centro[2] + 0.1;
    caras[1][0][3] = 0.0f,    /// texture
    caras[1][0][4] = 0.5f;

    caras[1][1][0] = centro[0] - 0.1;  /// 0
    caras[1][1][1] = centro[1] + 0.1;
    caras[1][1][2] = centro[2] + 0.1;
    caras[1][1][3] = 0.0f;     /// texture
    caras[1][1][4] = 0.0f;

    caras[1][2][0] = centro[0] - 0.1;  /// 0
    caras[1][2][1] = centro[1] + 0.1;
    caras[1][2][2] = centro[2] - 0.1;
    caras[1][2][3] = 0.33f;     /// texture
    caras[1][2][4] = 0.0f;

    caras[1][3][0] = centro[0] - 0.1;  /// 0
    caras[1][3][1] = centro[1] - 0.1;
    caras[1][3][2] = centro[2] - 0.1;
   caras[1][3][3] = 0.0f;     /// texture
    caras[1][3][4] = 0.5f;

    caras[1][4][0] = centro[0] - 0.1;  /// 0
    caras[1][4][1] = centro[1] - 0.1;
    caras[1][4][2] = centro[2] + 0.1;
    caras[1][4][3] = 0.0f;     /// texture
    caras[1][4][4] = 0.5f;

    caras[1][5][0] = centro[0] - 0.1;  /// 0
    caras[1][5][1] = centro[1] + 0.1;
    caras[1][5][2] = centro[2] - 0.1;
    caras[1][5][3] = 0.33f;     /// texture
    caras[1][5][4] = 0.0f;


    caras[2][0][0] = centro[0] + 0.1;  ///    Back
    caras[2][0][1] = centro[1] + 0.1;
    caras[2][0][2] = centro[2] - 0.1;
    caras[2][0][3] = 0.0f;     /// texture
    caras[2][0][4] = 1.0f;

    caras[2][1][0] = centro[0] - 0.1;  /// 
    caras[2][1][1] = centro[1] + 0.1;
    caras[2][1][2] = centro[2] - 0.1;
    caras[2][1][3] = 0.0f;     /// texture
    caras[2][1][4] = 0.5f;

    caras[2][2][0] = centro[0] - 0.1;  /// 
    caras[2][2][1] = centro[1] - 0.1;
    caras[2][2][2] = centro[2] - 0.1;
    caras[2][2][3] = 0.33f;     /// texture
    caras[2][2][4] = 0.5f;

    caras[2][3][0] = centro[0] + 0.1;  /// 
    caras[2][3][1] = centro[1] + 0.1;
    caras[2][3][2] = centro[2] - 0.1;
    caras[2][3][3] = 0.0f;     /// texture
    caras[2][3][4] = 1.0f;

    caras[2][4][0] = centro[0] + 0.1;  /// 
    caras[2][4][1] = centro[1] - 0.1;
    caras[2][4][2] = centro[2] - 0.1;
    caras[2][4][3] = 0.0f;     /// texture
    caras[2][4][4] = 1.0f;

    caras[2][5][0] = centro[0] - 0.1;  /// 
    caras[2][5][1] = centro[1] - 0.1;
    caras[2][5][2] = centro[2] - 0.1;
    caras[2][5][3] = 0.33f;     /// texture
    caras[2][5][4] = 0.5f;





    caras[3][0][0] = centro[0] + 0.1;  ///    Right
    caras[3][0][1] = centro[1] + 0.1;
    caras[3][0][2] = centro[2] + 0.1;
    caras[3][0][3] = 0.0f;     /// texture
    caras[3][0][4] = 1.0f;

    caras[3][1][0] = centro[0] + 0.1;  /// 
    caras[3][1][1] = centro[1] - 0.1;
    caras[3][1][2] = centro[2] + 0.1;
    caras[3][1][3] = 0.0f;     /// texture
    caras[3][1][4] = 0.5f;

    caras[3][2][0] = centro[0] + 0.1;  /// 
    caras[3][2][1] = centro[1] - 0.1;
    caras[3][2][2] = centro[2] - 0.1;
    caras[3][2][3] = 0.33f;     /// texture
    caras[3][2][4] = 0.5f;

    caras[3][3][0] = centro[0] + 0.1;  /// 
    caras[3][3][1] = centro[1] + 0.1;
    caras[3][3][2] = centro[2] + 0.1;
    caras[3][3][3] = 0.0f;     /// texture
    caras[3][3][4] = 1.0f;

    caras[3][4][0] = centro[0] + 0.1;  /// 
    caras[3][4][1] = centro[1] + 0.1;
    caras[3][4][2] = centro[2] - 0.1;
    caras[3][4][3] = 0.0f;     /// texture
    caras[3][4][4] = 1.0f;

    caras[3][5][0] = centro[0] + 0.1;  /// 
    caras[3][5][1] = centro[1] - 0.1;
    caras[3][5][2] = centro[2] - 0.1;
    caras[3][5][3] = 0.33f;     /// texture
    caras[3][5][4] = 0.5f;




    caras[4][0][0] = centro[0] + 0.1;  ///    Down
    caras[4][0][1] = centro[1] - 0.1;
    caras[4][0][2] = centro[2] + 0.1;
    caras[4][0][3] = 0.0f;     /// texture
    caras[4][0][4] = 1.0f;

    caras[4][1][0] = centro[0] - 0.1;  /// 
    caras[4][1][1] = centro[1] - 0.1;
    caras[4][1][2] = centro[2] + 0.1;
    caras[4][1][3] = 0.0f;     /// texture
    caras[4][1][4] = 0.5f;

    caras[4][2][0] = centro[0] - 0.1;  /// 
    caras[4][2][1] = centro[1] - 0.1;
    caras[4][2][2] = centro[2] - 0.1;
    caras[4][2][3] = 0.33f;     /// texture
    caras[4][2][4] = 0.5f;

    caras[4][3][0] = centro[0] + 0.1;  /// 
    caras[4][3][1] = centro[1] - 0.1;
    caras[4][3][2] = centro[2] + 0.1;
    caras[4][3][3] = 0.0f;     /// texture
    caras[4][3][4] = 1.0f;

    caras[4][4][0] = centro[0] + 0.1;  /// 
    caras[4][4][1] = centro[1] - 0.1;
    caras[4][4][2] = centro[2] - 0.1;
    caras[4][4][3] = 0.0f;     /// texture
    caras[4][4][4] = 1.0f;

    caras[4][5][0] = centro[0] - 0.1;  /// 
    caras[4][5][1] = centro[1] - 0.1;
    caras[4][5][2] = centro[2] - 0.1;
    caras[4][5][3] = 0.33f;     /// texture
    caras[4][5][4] = 0.5f;



    caras[5][0][0] = centro[0] + 0.1;  /// 4   front
    caras[5][0][1] = centro[1] + 0.1;
    caras[5][0][2] = centro[2] + 0.1;
  //  caras[5][0][3] = 0.0f;     /// texture
 ///   caras[5][0][4] = 1.0f;

    caras[5][1][0] = centro[0] - 0.1;  /// 4
    caras[5][1][1] = centro[1] + 0.1;
    caras[5][1][2] = centro[2] + 0.1;
 //   caras[5][1][3] = 0.0f;     /// texture
 //   caras[5][1][4] = 0.5f;

    caras[5][2][0] = centro[0] - 0.1;  /// 4
    caras[5][2][1] = centro[1] - 0.1;
    caras[5][2][2] = centro[2] + 0.1;
   // caras[5][2][3] = 0.33f;     /// texture
  //  caras[5][2][4] = 0.5f;

    caras[5][3][0] = centro[0] + 0.1;  /// 4
    caras[5][3][1] = centro[1] + 0.1;
    caras[5][3][2] = centro[2] + 0.1;
//    caras[5][3][3] = 0.0f;     /// texture
   // caras[5][3][4] = 1.0f;

    caras[5][4][0] = centro[0] + 0.1;  /// 4
    caras[5][4][1] = centro[1] - 0.1;
    caras[5][4][2] = centro[2] + 0.1;
  //  caras[5][4][3] = 0.0f;     /// texture
 //   caras[5][4][4] = 1.0f;

    caras[5][5][0] = centro[0] - 0.1;  /// 4
    caras[5][5][1] = centro[1] - 0.1;
    caras[5][5][2] = centro[2] + 0.1;
 //   caras[5][5][3] = 0.33f;     /// texture
//    caras[5][5][4] = 0.5f;
}