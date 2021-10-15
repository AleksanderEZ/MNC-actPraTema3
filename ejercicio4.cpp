#include <cstdio>
#include <cstdlib>
#include <mkl.h>

#include "Utils.h"
#include "ejercicio4.h"

void ejercicio4apartado1() {
	double A[3 * 3] = { 1,2,3,4,5,6,7,8,9 };
	double x[3] = { 1.0, 10.0, 100.0 };
	double y[3] = { 200.0, 20.0, 2.0 };
	double z[3] = { 0.0, 0.0, 0.0 };

	showMatrix(A, 3, 3);
	cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 1, A, 3, x, 1, 1, z, 1);
	showArray(x, 3);

	printf("a) ");
	showArray(z, 3);

	printf("b) ");
	cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 3, A, 3, x, 1, 4, y, 1);

	showArray(y, 3);
}

void ejercicio4apartado2() {
	double A[3 * 3] = { 1,2,3,4,5,6,7,8,9 };
	double x[3] = { 1.0, 10.0, 100.0 };
	double y[3] = { 200.0, 20.0, 2.0 };
	double z[3] = { 0.0, 0.0, 0.0 };

	showMatrix(A, 3, 3);
	cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 1, A, 3, x, 1, 1, z, 1);
	showArray(x, 3);

	printf("a) ");
	showArray(z, 3);

	printf("b) ");
	cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 3, A, 3, x, 1, 4, y, 1);

	showArray(y, 3);
}

void ejercicio4apartado3() {
	double A[3 * 3] = { 1,2,3,4,5,6,7,8,9 };
	double x[3] = { 1.0, 10.0, 100.0 };
	double y[3] = { 200.0, 20.0, 2.0 };
	double z[3] = { 0.0, 0.0, 0.0 };

	showMatrix(A, 3, 3);
	cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 1, A, 3, x, 1, 1, z, 1);
	showArray(x, 3);

	printf("a) ");
	showArray(z, 3);

	printf("b) ");
	cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 3, A, 3, x, 1, 4, y, 1);

	showArray(y, 3);
}