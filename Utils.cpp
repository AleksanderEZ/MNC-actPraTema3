#include <cstdio>
#include "Utils.h"

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