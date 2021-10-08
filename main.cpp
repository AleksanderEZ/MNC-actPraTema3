#include <cstdio>
#include <cstdlib>

#include <mkl.h>

void ejercicio1();
void ejercicio2apartado1();
void ejercicio2apartado2();
void showArray(double* array, int arraySize);
void showArrayText(double* array, int arraySize);
double map(double original);

int main() {
	
	ejercicio1();
	ejercicio2apartado1();
	ejercicio2apartado2();


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

void ejercicio2apartado1() {
	double vector1[3] = { 5.0,0.0,27.0 };
	double vector2[3] = { 0.0,5.0,0.0 };

	printf("Producto escalar: %lf\n", cblas_ddot(3, vector1, 1, vector2, 1));
}

void ejercicio2apartado2() {
	double vN[11] = { 'A', 'l','e','k','s','a','n','d','e','r' };
	double vA[11] = {'O', 'l', 'i', 'v', 'a', 'r', 'e', 's', 0, 0};

	cblas_daxpy(11, 3, vA, 1, vN, 1);
	for (int i = 0; i < 11; i++) {
		vN[i] = map(vN[i]);
	}
	showArrayText(vN, 11);
}

void showArray(double* array, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("%lf ", array[i]);
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