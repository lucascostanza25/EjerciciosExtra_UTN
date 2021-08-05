/*
21. Hacer el programa que nos permita contar los múltiplos de 3 desde la unidad hasta un número que introducimos por teclado
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, numeroIngresado, contadorMultiplos;
	contadorMultiplos=0;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	for(i=numeroIngresado; i<10; i++)
	{
		if(i%3==0)
		{
			contadorMultiplos++;
		}
	}

	return EXIT_SUCCESS;
}
