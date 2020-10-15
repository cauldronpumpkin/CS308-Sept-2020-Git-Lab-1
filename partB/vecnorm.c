#include <stdio.h>
#include "veclib.h"
#include <math.h>

#define DIM 4
typedef float vector[DIM];

float norm(vector vec_a, vector vec_b)
{

	float ans = 0;
	for(int i = 0;i < DIM;i++) ans += pow(vec_a[i] - vec_b[i],2);
	return ans;

}