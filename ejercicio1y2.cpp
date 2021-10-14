#include <cstdio>
#include <cstdlib>
#include <mkl.h>

#include "ejercicio1y2.h"
#include "Utils.h"

void ejercicio1() {
	double fin, inicio = dsecnd();	// INICIO 

	inicio = dsecnd();	// INICIO DE CRONOMETRAJE

	printf("Hola, MKL lista para utilizarse\n");

	fin = dsecnd();	// FIN DE CRONOMETRAJE
	// REPORT DE RESULTADO EN UN MICROSEGUNDO
	printf("Tiempo: %lf usec\n", (fin - inicio) * 1.0e6);
}

void ejercicio2apartado1() {
	double vector1[3] = { 5.0,0.0,27.0 };
	double vector2[3] = { 0.0,5.0,0.0 };

	printf("Producto escalar: %lf\n", cblas_ddot(3, vector1, 1, vector2, 1));
}

void ejercicio2apartado2() {
	double vN[11] = { 'A', 'l','e','k','s','a','n','d','e','r' };
	double vA[11] = { 'O', 'l', 'i', 'v', 'a', 'r', 'e', 's', 0, 0 };

	cblas_daxpy(11, 3, vA, 1, vN, 1);
	for (int i = 0; i < 11; i++) {
		vN[i] = map(vN[i]);
	}
	showArrayText(vN, 11);
}

void ejercicio2apartado3() {
	//double birthdate[8] = { 0.0, 9.0, 0.0, 8.0, 2.0, 0.0, 0.0, 0.0 };
	double birthdate[8] = { 1.0, 0.0, 0.0, 9.0, 2.0, 0.0, 0.0, 0.0 };
	showArray(birthdate, 8);
	double norm2 = cblas_dnrm2(8, birthdate, 1);
	printf("Norma2: %lf \n", norm2);
	int mod11 = (int)norm2 % 11;
	printf("Nota de MNC: %d \n", mod11);
}

void ejercicio2apartado4() {
	//double birthdate[8] = { 0.0, 9.0, 0.0, 8.0, 2.0, 0.0, 0.0, 0.0 };
	double birthdate[8] = { 1.0, 0.0, 0.0, 9.0, 2.0, 0.0, 0.0, 0.0 };
	showArray(birthdate, 8);
	// El incremento se podría usar para hacer operaciones matriciales usando solamente BLAS nivel 1.
	for (int i = 0; i < 5; i++) {
		double norm2 = cblas_dnrm2(8, birthdate, i);
		printf("Norma2: %lf \n", norm2);
		int mod11 = (int)norm2 % 11;
		printf("Nota de MNC con incremento %d: %d \n", i, mod11);
	}
}