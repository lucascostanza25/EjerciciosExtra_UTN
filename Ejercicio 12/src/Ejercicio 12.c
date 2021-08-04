/*
12. Hacer el programa que imprima los números del 1 al 100
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;

	printf("Numeros: ");

	for(i=0; i<100; i++)
	{
		printf(" %d", i);
	}

	return EXIT_SUCCESS;
}
