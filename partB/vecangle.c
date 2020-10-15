#include <stdio.h>
#include "veclib.h"
#include <math.h>

#define DIM 4
typedef float vector[DIM];

float angle(vector vec_a, vector vec_b)
{
    float dot_pr = 0;
    float mag_a = 0;
    float mag_b = 0;
    double pi = 3.14159;
    for (int i = 0; i < DIM; i++)
    {
        float tmp_a = vec_a[i] * vec_a[i];
        float tmp_b = vec_b[i] * vec_b[i];
        float tmp = vec_a[i] * vec_b[i];
        dot_pr = dot_pr + tmp;
        mag_a = mag_a + tmp_a;
        mag_b = mag_b + tmp_b;
    }
    float ang = acos(dot_pr / (sqrt(mag_a) * sqrt(mag_b)));
    return ang * (180 / pi);
}