/*
10. Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, contadorPares, contadorImpares;
	contadorPares=0;
	contadorImpares=0;

	for(i=0; i<100; i++)
	{
		if(i%2==0)
		{
			contadorPares++;
		}
		else
		{
			contadorImpares++;
		}
	}

	printf("La cantidad de numeros pares es: %d"
			"\nLa cantidad de numeros impares es: %d", contadorPares, contadorImpares);
	return EXIT_SUCCESS;
}
