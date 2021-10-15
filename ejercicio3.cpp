#include <cstdio>
#include <cstdlib>
#include <mkl.h>

#include "Utils.h"
#include "ejercicio3.h"

void ejercicio3apartado1() {
	double A[3*3] = { 1,2,3,4,5,6,7,8,9 };
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

void ejercicio3apartado2() {
	double A[3 * 3] = { 1,2,3,4,5,6,7,8,9 };
	double x[3] = { 1.0, 10.0, 100.0 };
	double y[3] = { 200.0, 20.0, 2.0 };
	double z[3] = { 0.0, 0.0, 0.0 };

	cblas_dgemv(CblasColMajor, CblasNoTrans, 3, 3, 1, A, 3, x, 1, 1, z, 1);

	printf("a) ColMajor\n");
	showArray(z, 3);

	double b[3] = { 0.0, 0.0, 0.0 };

	cblas_dgemv(CblasRowMajor, CblasTrans, 3, 3, 1, A, 3, x, 1, 1, b, 1);

	printf("a) Transposicion \n");
	showArray(b, 3);

	double c[3] = { 0.0, 0.0, 0.0 };

	cblas_dgemv(CblasColMajor, CblasTrans, 3, 3, 1, A, 3, x, 1, 1, c, 1);

	printf("a) Transposicion y colmajor \n");
	showArray(c, 3);
}

void ejercicio3apartado3() { 
	// lda es el salto en memoria física para ir a buscar un elemento en la matriz, 
	//que generalmente toma el valor N si la matriz es MxN. no puede ser menor que N porque no tiene sentido y MKL no te deja.
	//cuando es mayor coge basura de la memoria
	double A[3 * 3] = { 1,2,3,4,5,6,7,8,9 };
	double x[3] = { 1.0, 10.0, 100.0 };
	double y[3] = { 200.0, 20.0, 2.0 };
	double z[3] = { 0.0, 0.0, 0.0 };

	printf("a) ");
	for (int lda = 3; lda < 5; lda++) {
		cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 1, A, lda, x, 1, 1, z, 1);
		printf("lda = %d\t", lda);
		showArray(z, 3);
		z[0] = 0.0;
		z[1] = 0.0;
		z[2] = 0.0;
	}


	printf("b) ");
	for (int lda = 3; lda < 5; lda++) {
		cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 3, A, lda, x, 1, 4, y, 1);
		printf("lda = %d\t", lda);
		showArray(y, 3);
		y[0] = 200.0;
		y[1] = 20.0;
		y[2] = 2.0;
	}

}