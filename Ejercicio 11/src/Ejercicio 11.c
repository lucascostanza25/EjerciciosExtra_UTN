/*
11. Hacer el programa que imprima los números pares entre el 1 y el 100
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;

	printf("Numeros pares: ");

	for(i=0; i<100; i++)
	{
		if(i%2==0)
		{
			printf(" - %d", i);
		}
	}
	return EXIT_SUCCESS;
}
