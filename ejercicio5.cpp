#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <mkl.h>

#include "Utils.h"
#include "ejercicio5.h"

int referenceValues[] = { 2,3,4,5,10,20,50,100,200,1000 };

double** ejercicio5apartado1(int n) {
	
	
	double* A = generateRandomMatrixDouble(n);

	double* B = generateRandomMatrixDouble(n);

	double* C = generateRandomMatrixDouble(n);


	double* arrayxd[3]  = { A, B, C };
	return arrayxd;
}
void ejercicio5apartado2() {
	srand((unsigned int)time(NULL));
	double fin, inicio = dsecnd();
	for (int index = 0; index < 10; index++) {
		double** arrayxd = ejercicio5apartado1(referenceValues[index]);
		double* A = arrayxd[0];
		double* B = arrayxd[1];
		double* C = arrayxd[2];
		inicio = dsecnd();
		for (int iterations = 0; iterations < 100; iterations++)
		{
			cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 
				referenceValues[index], referenceValues[index], referenceValues[index], 
				1, A, referenceValues[index], B, referenceValues[index], 0, C, referenceValues[index]);
		}
		fin = dsecnd();
		mkl_free(A); // free memory
		mkl_free(B);
		mkl_free(C);
		printf("GFLOPS para N = %d: %lf\n", referenceValues[index], (1/((fin - inicio) / 100))/1.0e9);
	}
	

	
}
void ejercicio5apartado3() {}
void ejercicio5apartado4() {}
void ejercicio5apartado5() {}