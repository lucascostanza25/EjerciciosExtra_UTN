/*
13. Hacer el programa que imprima los números del 100 al 0 en orden decreciente
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;

	for(i=100; i>0; i--)
	{
		printf(" - %d", i);
	}
	return EXIT_SUCCESS;
}
