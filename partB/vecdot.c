#include <stdio.h>
#include "veclib.h"

#define DIM 4
typedef float vector[DIM];

float dot(vector vec_a, vector vec_b)
{
	float ans = 0;
	for(int i = 0;i < DIM;i++) ans += (vec_a[i]*vec_b[i]);
	return ans;
}