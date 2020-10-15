#include "veclib.h"
#include <stdio.h>

#define DIM 4
typedef float vector[DIM];

void print(vector vec_a) 
{
	printf("[");

	for (int i = 0; i < DIM; i++)
		printf("%f ", vec_a[i]);

	printf("]");
}

int main() 
{
	vector vecA, vecB, vecC;
	
	printf("Input Vector A\n");
	for (int i = 0; i < DIM; i++)
	{
		scanf("%f", &vecA[i]);
	}

	printf("\nInput Vector B\n");
	for (int i = 0; i < DIM; i++)
	{
		scanf("%f", &vecB[i]);
	}

	printf("Printing vector sum\n");
	add(vecA, vecB, &vecC);
	print(vecC);

	printf("Printing vector product\n");
	eleProd(vecA, vecB, &vecC);
	print(vecC);

	printf("Printing vector difference\n");
	diff(vecA, vecB, &vecC);
	print(vecC);

	printf("Printing vector dot product\n");
	dotprod(vecA, vecB, &vecC);
	print(vecC);

	printf("Printing vector angle\n");
	angle(vecA, vecB);
	print(vecC);
} 