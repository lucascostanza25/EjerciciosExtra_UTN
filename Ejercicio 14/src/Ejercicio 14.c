/*
14. Diseñar un programa que imprima y sume la serie de números 3,6,9,12,...,99.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, resultado;

	for(i=0; i<100; i++)
	{
		resultado=i*3;
		printf(" - %d", resultado);
	}
	return EXIT_SUCCESS;
}
