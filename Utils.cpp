#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <mkl.h>
#include "Utils.h"



double* generateRandomMatrixDouble(int N) {
	double* matrix = (double*)mkl_malloc(N * N * sizeof(double), 64); // allocatememory
	if (matrix == (double*)NULL) {
		perror("Error malloc");
		exit(1);
	}

	double* pointer = matrix;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			*(pointer++) = (double)rand() / (double)RAND_MAX;
		}
	}
	return matrix;
}

float* generateRandomMatrixFloat(int N) {
	float* matrix = (float*)mkl_malloc(N * N * sizeof(float), 64); // allocatememory
	if (matrix == (float*)NULL) {
		perror("Error malloc");
		exit(1);
	}

	float* pointer = matrix;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			*(pointer++) = (double)rand() / (double)RAND_MAX;
		}
	}
	return matrix;
}

void showArray(double* array, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("%lf ", array[i]);
	}
	printf("\n");
}

void showMatrix(double* matrix, int size1, int size2) {
	int p = 0;
	for (int i = 0; i < size1*size2; i++) {
		printf("%lf ", matrix[i]);
		p++;
		if(p >= size2){
			printf("\n");
			p = 0;
		}
	}
	printf("\n");
}

void showArrayText(double* array, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("%c", (char)array[i]);
	}
	printf("\n");
}

double map(double original) {
	return 97 + (122 - 97) * (original / 461);
}

void resetMatrix(double* matrix, int size) {
	for (int i = 0; i < size; i++) {
		matrix[i] = 0;
	}
}
