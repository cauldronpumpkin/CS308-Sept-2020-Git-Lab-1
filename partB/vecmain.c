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
	printf("\n");

	printf("Printing vector product\n");
	eleProd(vecA, vecB, &vecC);
	print(vecC);

	printf("Printing norm of the difference of the two vectors\n");
	printf("%f\n",norm(vecA, vecB));
	

	printf("Printing vector dot product\n");
	printf("%f\n",dot(vecA, vecB));
	

	printf("Printing vector angle\n");
	float ang = angle(vecA, vecB);
	printf("%f\n", ang);
}