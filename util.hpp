#pragma once

#include "cubo.hpp"


//  black   white   yellow      orange      red     blue        green
unsigned int texture1, texture2, texture3, texture4, texture5, texture6, texture7;
//float tex1[4][2];   /// 0   1   2   3   4   5   6   7   8   y   negro
// 0/3 1 2/5 4


///float ***indices;
float* indices1;
float* indices2;
float* indices3;
float* indices4;
float* indices5;
float* indices6;
float* indices7;
float* indices8;
float* indices9;
float* indices10;




/**
indices = new float** [10];
for (int i = 0; i < 10; ++i) {
	indices[i] = new float* [4];
}
for (int i = 0; i < 10; ++i) {
	for (int j = 0; j < 4; ++j) {
		indices[i][j] = new float[2];
	}
}
*/

void i_1() {

	//  up			0/3 1 2/5 4
	indices1 = new float[8];
	indices2 = new float[8];
	indices3 = new float[8];
	indices4 = new float[8];
	indices5 = new float[8];
	indices6 = new float[8];
	indices7 = new float[8];
	indices8 = new float[8];
	indices9 = new float[8];
	indices10 = new float[8];

	//  rojo			0/3 1 2/5 4
	indices1[0] = 0.0f;
	indices1[1] = 0.5f;
	indices1[2] = 0.0f;
	indices1[3] = 0.333f;
	indices1[4] = 0.111f;
	indices1[5] = 0.333f;
	indices1[6] = 0.111f;
	indices1[7] = 0.5f;

	//  rojo			0/3 1 2/5 4
	indices2[0] = 0.111f;
	indices2[1] = 0.5f;
	indices2[2] = 0.111f;
	indices2[3] = 0.333f;
	indices2[4] = 0.222f;
	indices2[5] = 0.333f;
	indices2[6] = 0.222f;
	indices2[7] = 0.5f;

	//  black			0/3 1 2/5 4
	indices3[0] = 0.222f;
	indices3[1] = 0.5f;
	indices3[2] = 0.222f;
	indices3[3] = 0.333f;
	indices3[4] = 0.333f;
	indices3[5] = 0.333f;
	indices3[6] = 0.333f;
	indices3[7] = 0.5f;
	
	indices4[0] = 0.0f;
	indices4[1] = 0.333f;
	indices4[2] = 0.0f;
	indices4[3] = 0.166f;
	indices4[4] = 0.111f;
	indices4[5] = 0.166f;
	indices4[6] = 0.111f;
	indices4[7] = 0.333f;

	//  black			0/3 1 2/5 4
	indices5[0] = 0.111f;
	indices5[1] = 0.333f;
	indices5[2] = 0.111f;
	indices5[3] = 0.166f;
	indices5[4] = 0.222f;
	indices5[5] = 0.166f;
	indices5[6] = 0.222f;
	indices5[7] = 0.333f;

	indices6[0] = 0.222f;
	indices6[1] = 0.333f;
	indices6[2] = 0.222f;
	indices6[3] = 0.166f;
	indices6[4] = 0.333f;
	indices6[5] = 0.166f;
	indices6[6] = 0.333f;
	indices6[7] = 0.333f;

	indices7[0] = 0.0f;		// not est
	indices7[1] = 0.166f;
	indices7[2] = 0.0f;
	indices7[3] = 0.0f;
	indices7[4] = 0.111f;
	indices7[5] = 0.0f;
	indices7[6] = 0.111f;
	indices7[7] = 0.166f;

	indices8[0] = 0.111f;
	indices8[1] = 0.166f;
	indices8[2] = 0.111f;
	indices8[3] = 0.0f;
	indices8[4] = 0.222f;
	indices8[5] = 0.0f;
	indices8[6] = 0.222f;
	indices8[7] = 0.166f;

	indices9[0] = 0.222f;
	indices9[1] = 0.166f;
	indices9[2] = 0.222f;
	indices9[3] = 0.0f;
	indices9[4] = 0.333f;
	indices9[5] = 0.0f;
	indices9[6] = 0.333f;
	indices9[7] = 0.166f;

	//  black			0/3 1 2/5 4
	indices10[0] = 0.0002f;
	indices10[1] = 0.02f;
	indices10[2] = 0.0002f;
	indices10[3] = 0.01f;
	indices10[4] = 0.0002f;
	indices10[5] = 0.02f;
	indices10[6] = 0.0002f;
	indices10[7] = 0.02f;

}
				/// 0   1   2   3   4   5   6   7   8   y   negro
void texture_1(float coor1[8], float coor2[8], float coor3[8], 
	float coor4[8], float coor5[8], float coor6[8],	 
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];      
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];    
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];      
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];     
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];      
	caras[0][5][4] = offY + coor1[5];

	// offX = 0.33f;	0/3 1 2/5 4
	 //offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];

	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[4];
	caras[1][4][4] = offY + coor2[5];
	caras[1][5][3] = offX + coor2[6];	//4
	caras[1][5][4] = offY + coor2[7];	//5


	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


/// 0   1   2   3   4   5   6   7   8   y   negro
void texture_2(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	// offX = 0.33f;
	 //offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	 offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}

void texture_3(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}

void texture_4(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	offY = 0.5f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_5(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.0f;
	offY = 0.0f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_6(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	//caras[3][4][3] = offX + coor4[6];
	//caras[3][4][4] = offY + coor4[7];
	//caras[3][5][3] = offX + coor4[4];
	//caras[3][5][4] = offY + coor4[5];

	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.0f;
	offY = 0.0f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_7(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	offX = 0.333f;
	offY = 0.5f;
	//offX = 0.0f;
	//offY = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offY = 0.5f;////FRONT
	offX = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}

void texture_8(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	 offX = 0.333f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5
	offX = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	offY = 0.5f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_9(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	offX = 0.333f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	offX = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_10(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	offX = 0.333f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	offX = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];


	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	/**
	offX = 0.0f;
	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[4];
	caras[5][4][4] = offY + coor6[5];
	caras[5][5][3] = offX + coor6[6];
	caras[5][5][4] = offY + coor6[7];
	*/
	//offX = 0.333f;
	offY = 0.5f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_11(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];

	offX = 0.33f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.0f;
	offY = 0.0f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_12(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.0f;
	offY = 0.0f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];


	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_13(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	offX = 0.666f;
	 offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.0f;
	offY = 0.0f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];


	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_14(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.0f;
	offY = 0.0f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];


	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}




void texture_15(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	offY = 0.5f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];


	offX = 0.0f;
	offY = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_16(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.333f;
	offY = 0.5f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	offY = 0.5f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];


	offX = 0.0f;
	offY = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_17(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.0f;
	offY = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_18(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];



	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_19(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	offX = 0.33f;
	offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	
	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];
	

	offX = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];



	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void texture_20(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	offX = 0.333f;
	offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];



	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_21(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	offX = 0.333f;
	offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	offY = 0.5f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_22(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	offX = 0.666f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	offX = 0.0f;
	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];


	offX = 0.666f;
	offY = 0.5f;

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_23(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];


	offX = 0.33f;
	offY = 0.0f;
	
	caras[1][0][3] = offX + coor2[0];      /// UP
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	
	
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];
	caras[1][5][4] = offY + coor2[5];

	/*
	caras[1][0][3] = 0.44f;	///left
	caras[1][0][4] = 0.333f;
	caras[1][1][3] = 0.44f;
	caras[1][1][4] = 0.166f;
	caras[1][2][3] = 0.55f;
	caras[1][2][4] = 0.166f;

	
	caras[1][3][3] = 0.44f;	///left
	caras[1][3][4] = 0.333f;
	caras[1][4][3] = 0.55f;
	caras[1][4][4] = 0.166f;
	caras[1][5][3] = 0.55f;
	caras[1][5][4] = 0.333f;

	/*
	indices5[0] = 0.111f;
	indices5[1] = 0.333f;
	indices5[2] = 0.111f;
	indices5[3] = 0.166f;
	indices5[4] = 0.222f;
	indices5[5] = 0.166f;
	indices5[6] = 0.222f;
	indices5[7] = 0.333f;
	*/
	offX = 0.0f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];



	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_24(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	offX = 0.333f;
	offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	offX = 0.0f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];




	//offX = 0.2f;
	//offY = 0.2f;
	
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];
	//offX = 0.7f;
	//offY = 0.7f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
	

}




void texture_25(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	offX = 0.333f;
	offY = 0.0f;
	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[6];
	caras[1][3][4] = offY + coor2[7];
	caras[1][4][3] = offX + coor2[0];
	caras[1][4][4] = offY + coor2[1];
	caras[1][5][3] = offX + coor2[4];	//4
	caras[1][5][4] = offY + coor2[5];	//5

	offX = 0.0f;
	offY = 0.0f;
	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];


	offX = 0.666f;
	offY = 0.5f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}




void texture_26(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}



void texture_27(float coor1[8], float coor2[8], float coor3[8],
	float coor4[8], float coor5[8], float coor6[8],
	float caras[6][6][5], cubito obj) {

	float offX = 0.0f;
	float offY = 0.0f;
	///6 caras 0-6  3/4
	caras[0][0][3] = offX + coor1[0];      /// UP
	caras[0][0][4] = offY + coor1[1];
	caras[0][1][3] = offX + coor1[2];
	caras[0][1][4] = offY + coor1[3];
	caras[0][2][3] = offX + coor1[4];
	caras[0][2][4] = offY + coor1[5];
	caras[0][3][3] = offX + coor1[0];
	caras[0][3][4] = offY + coor1[1];
	caras[0][4][3] = offX + coor1[6];
	caras[0][4][4] = offY + coor1[7];
	caras[0][5][3] = offX + coor1[4];
	caras[0][5][4] = offY + coor1[5];

	caras[1][0][3] = offX + coor2[0];	///left
	caras[1][0][4] = offY + coor2[1];
	caras[1][1][3] = offX + coor2[2];
	caras[1][1][4] = offY + coor2[3];
	caras[1][2][3] = offX + coor2[4];
	caras[1][2][4] = offY + coor2[5];
	caras[1][3][3] = offX + coor2[0];
	caras[1][3][4] = offY + coor2[1];
	caras[1][4][3] = offX + coor2[6];
	caras[1][4][4] = offY + coor2[7];
	caras[1][5][3] = offX + coor2[2];	//4
	caras[1][5][4] = offY + coor2[3];	//5

	caras[2][0][3] = offX + coor3[0];
	caras[2][0][4] = offY + coor3[1];
	caras[2][1][3] = offX + coor3[2];
	caras[2][1][4] = offY + coor3[3];
	caras[2][2][3] = offX + coor3[4];
	caras[2][2][4] = offY + coor3[5];
	caras[2][3][3] = offX + coor3[0];
	caras[2][3][4] = offY + coor3[1];
	caras[2][4][3] = offX + coor3[6];
	caras[2][4][4] = offY + coor3[7];
	caras[2][5][3] = offX + coor3[4];
	caras[2][5][4] = offY + coor3[5];


	caras[3][0][3] = offX + coor4[0];
	caras[3][0][4] = offY + coor4[1];
	caras[3][1][3] = offX + coor4[2];
	caras[3][1][4] = offY + coor4[3];
	caras[3][2][3] = offX + coor4[4];
	caras[3][2][4] = offY + coor4[5];
	caras[3][3][3] = offX + coor4[0];
	caras[3][3][4] = offY + coor4[1];
	caras[3][4][3] = offX + coor4[6];
	caras[3][4][4] = offY + coor4[7];
	caras[3][5][3] = offX + coor4[4];
	caras[3][5][4] = offY + coor4[5];

	offX = 0.666f;
	offY = 0.5f;
	caras[4][0][3] = offX + coor5[0];
	caras[4][0][4] = offY + coor5[1];
	caras[4][1][3] = offX + coor5[2];
	caras[4][1][4] = offY + coor5[3];
	caras[4][2][3] = offX + coor5[4];
	caras[4][2][4] = offY + coor5[5];
	caras[4][3][3] = offX + coor5[0];
	caras[4][3][4] = offY + coor5[1];
	caras[4][4][3] = offX + coor5[6];
	caras[4][4][4] = offY + coor5[7];
	caras[4][5][3] = offX + coor5[4];
	caras[4][5][4] = offY + coor5[5];

	offX = 0.0f;
	offY = 0.0f;
	caras[5][0][3] = offX + coor6[0];
	caras[5][0][4] = offY + coor6[1];
	caras[5][1][3] = offX + coor6[2];
	caras[5][1][4] = offY + coor6[3];
	caras[5][2][3] = offX + coor6[4];
	caras[5][2][4] = offY + coor6[5];
	caras[5][3][3] = offX + coor6[0];
	caras[5][3][4] = offY + coor6[1];
	caras[5][4][3] = offX + coor6[6];
	caras[5][4][4] = offY + coor6[7];
	caras[5][5][3] = offX + coor6[4];
	caras[5][5][4] = offY + coor6[5];
}


void Deletei1() {
	/**
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 4; ++j) {
			delete indices[i][j];
		}
	}

	for (int i = 0; i < 10; ++i) {
		delete[]	indices[i];
	}
	delete[] indices;
	*/

	delete[]  indices1;
	delete[]  indices2;
	delete[]  indices3;
	delete[]  indices4;
	delete[]  indices5;
	delete[]  indices6;
	delete[]  indices7;
	delete[]  indices8;
	delete[]  indices9;
	delete[]  indices10;
}

