/*
20. Hacer el programa que imprima todos los números naturales que hay desde la unidad hasta un número que introducimos por teclado
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	for(int i=numeroIngresado; i<10; i++)
	{
		if(i>0)
		{
			printf("%d", i);
		}
	}
	return EXIT_SUCCESS;
}
