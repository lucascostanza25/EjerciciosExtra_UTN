/*
15. Escribir en y codificar en C un programa que muestre los múltiplos de 6 comprendidos entre 0 y 100
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;

	printf("Numeros multiplos de 6\n");

	for(i=0; i<100; i++)
	{
		if(i%6==0)
		{
			printf(" - %d", i);
		}
	}
	return EXIT_SUCCESS;
}
