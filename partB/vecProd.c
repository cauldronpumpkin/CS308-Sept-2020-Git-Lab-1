//#include <stdio.h>
#include "veclib.h"

//#define DIM 4
//typedef float vector[DIM];

void eleProd(vector vec_a, vector vec_b, vector vec_c)
{
	for (int i = 0; i < DIM; i++)
	{
		vec_c[i] = vec_a[i] * vec_b[i];
	}
}


// #include<stdio.h>
// void vectorProd(float v1[4], float v2[4]){
//     printf("prod of 2 vectors: (%.3f,%.3f,%.3f,%.3f)\n", v1[0]*v2[0], v1[1]*v2[1], v1[2]*v2[2], v1[3]*v2[3]);
//     return;
// }
