#include <cstdio>
#include <cstdlib>

#include <mkl.h>

void ejercicio1();
void ejercicio2();

int main() {
	
	ejercicio1();
	ejercicio2();


	return 0;
}

void ejercicio1() {
	double fin, inicio = dsecnd();	// INICIO 

	inicio = dsecnd();	// INICIO DE CRONOMETRAJE

	printf("Hola, MKL lista para utilizarse\n");

	fin = dsecnd();	// FIN DE CRONOMETRAJE
	// REPORT DE RESULTADO EN UN MICROSEGUNDO
	printf("Tiempo: %lf usec\n", (fin - inicio) * 1.0e6);
}

void ejercicio2() {
	double vector1[3] = { 5.0,27.0,1.0 };
	double vector2[3] = { 0.0,5.0,0.0 };

	printf("Producto escalar: %lf", cblas_ddot(3, vector1, 1, vector2, 1));
}