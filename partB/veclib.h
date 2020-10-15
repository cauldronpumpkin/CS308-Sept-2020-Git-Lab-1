#ifndef VECLIB_H
#define VECLIB_H

#define DIM 4
typedef float vector[DIM];

void print(vector vec_a);

void add(vector vec_a, vector vec_b, vector *vec_c);

void eleProd(vector vec_a, vector vec_b, vector *vec_c);

float norm(vector vec_a, vector vec_b);

float dot(vector vec_a, vector vec_b);

float angle(vector vec_a, vector vec_b);

#endif