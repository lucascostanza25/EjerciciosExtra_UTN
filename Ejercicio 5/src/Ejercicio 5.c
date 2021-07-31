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
	int numeroIngresado, resultado;
	printf("Ingrese un numero mayor a 0: ");
	scanf("%d", &numeroIngresado);
	while(numeroIngresado==0)
	{
		printf("Error!, ingrese un numero mayor a 0: ");
		scanf("%d", &numeroIngresado);
	}
	resultado=numeroIngresado*numeroIngresado;
	printf("El cuadrado del numero %d, es: %d", numeroIngresado, resultado);
	return EXIT_SUCCESS;
}
