#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <mkl.h>

#include "Utils.h"
#include "ejercicio5.h"

int referenceValues[] = { 500 };

double** ejercicio5apartado1(int n) {


	double* A = generateRandomMatrixDouble(n);

	double* B = generateRandomMatrixDouble(n);

	double* C = generateRandomMatrixDouble(n);


	double* arrayxd[3] = { A, B, C };
	return arrayxd;
}
void ejercicio5apartado2() {
	long long int n[6] = {1, 10, 100, 1000, 2000, 5000 };

	srand((unsigned int) 1);

	for (int i = 0; i < 6; i++)
	{
		double fin, inicio = dsecnd();
		for (int j = 0; j < 100; j++)
		{
			double* A = generateRandomMatrixDouble(n[i]);
			double* B = generateRandomMatrixDouble(n[i]);
			double* C = generateRandomMatrixDouble(n[i]);

			cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans,
				n[i], n[i], n[i],
				1, A, n[i], B, n[i], 0, C, n[i]);

			mkl_free(A); // free memory
			mkl_free(B); // free memory
			mkl_free(C); // free memory
		}
		fin = dsecnd();
		double t = (fin - inicio) / 100;
		double nCubo = n[i] * n[i] * n[i];
		printf("GFLOPS para N = %lld: %lf\n", n[i],
			(1 / (t / nCubo)) / 1.0e9);
	}
}

void ejercicio5apartado3() {}
void ejercicio5apartado4() {}
void ejercicio5apartado5() {}