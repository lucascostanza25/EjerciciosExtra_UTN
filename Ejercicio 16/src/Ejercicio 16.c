/*
16. Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o negativo
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	if(numeroIngresado>0)
	{
		printf("El numero %d, es positivo!", numeroIngresado);
	}
	else
	{
		printf("El numero %d, es negativo!", numeroIngresado);
	}

	return EXIT_SUCCESS;
}
