/*
1. Ingresar 5 números y calcular su media (promedio)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int numeroIngresado;
	int promedio;
	int acumulador=0;

	for(i=0; i<5; i++)
	{
		printf("Ingrese 5 numeros (%d/5): ", i);
		scanf("%d", &numeroIngresado);
		acumulador+=numeroIngresado;
	}

	promedio=acumulador/5;

	printf("El promedio de los numeros es: %d", promedio);
	return EXIT_SUCCESS;
}
