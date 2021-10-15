#include <cstdio>
#include <cstdlib>
#include <mkl.h>

#include "Utils.h"
#include "ejercicio4.h"

void ejercicio4apartado1() {
	double A[9] = { 0, 1, 0, 1, 1, 0, 0, 0, 0 };
	double B[9] = { 3, 7, 29, 5, 1, 0, 24, 97, 2 };
	double C[9] = { 1, 13, 17, 19, 37, 71, 11, 5, 2};
	double resultado[9];
	
	cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 3, 3, 3, 1, A, 3, B, 3, 0, resultado, 3);
	showMatrix(resultado, 3, 3);

	resetMatrix(resultado, 9);
	cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasTrans, 3, 3, 3, 1, A, 3, B, 3, 0, resultado, 3);
	showMatrix(resultado, 3, 3);

	cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 3, 3, 3, 2, A, 3, B, 3, 3, C, 3);
	showMatrix(C, 3, 3);
}

void ejercicio4apartado2() {
	double A[5] = { 1,2,3,4,5 };
	double B[5] = { 2,1,65,12,98 };
	double result[25];

	cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 5, 5, 1, 1, A, 1, B, 5, 0, result, 5);
	showMatrix(result, 5, 5);
}