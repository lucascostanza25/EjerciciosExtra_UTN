/*
17. Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	if(numeroIngresado%2==0)
	{
		printf("El numero %d es par!", numeroIngresado);
	}
	else
	{
		printf("El numero %d es impar!", numeroIngresado);
	}
	return EXIT_SUCCESS;
}
