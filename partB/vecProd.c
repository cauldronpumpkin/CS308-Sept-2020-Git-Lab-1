#include <stdio.h>
#include "veclib.h"

#define DIM 4
typedef float vector[DIM];

void eleProd(vector vec_a, vector vec_b, vector *vec_c)
{
	for (int i = 0; i < DIM; i++)
	{
		(*vec_c)[i] = vec_a[i]*vec_b[i];
	}
}



