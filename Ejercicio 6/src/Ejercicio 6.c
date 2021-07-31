/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado, contadorPositivo, contadorNegativo, i;
	contadorPositivo=0;
	contadorNegativo=0;
	for(i=0; i<10; i++)
	{
		printf("Ingrese 10 numeros (%d/10): ", i);
		scanf("%d", &numeroIngresado);
		if(numeroIngresado>0)
		{
			contadorPositivo++;
		}
		else
		{
			contadorNegativo++;
		}
	}
	printf("La cantidad de numeros positivos son %d, y de negativos %d", contadorPositivo, contadorNegativo);
	return EXIT_SUCCESS;
}
