#ifndef VECLIB_H
#define VECLIB_H

#define DIM 4
typedef float vector[DIM];

void print(vector vec_a);

void add(vector vec_a, vector vec_b, vector *vec_c);

void eleProd(vector vec_a, vector vec_b, vector *vec_c);

void diff(vector vec_a, vector vec_b, vector *vec_c);

void dotprod(vector vec_a, vector vec_b, vector *vec_c);

void angle (vector vec_a, vector vec_b);

#endif