/*
18. Diseñar en un programa que permita ingresar 10 números, ninguno de ellos igual a cero.
Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar ambos resultados
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, numeroIngresado, sumaPositivos, productoNegativos;
	sumaPositivos=0;
	productoNegativos=0;

	for(i=0; i<10; i++)
	{
		printf("Ingrese un numero (%d/10): ", i);
		scanf("%d", &numeroIngresado);

		while(numeroIngresado==0)
		{
			printf("Ingrese un numero distinto de 0: ");
			scanf("%d", &numeroIngresado);
		}

		if(numeroIngresado>0)
		{
			sumaPositivos+=numeroIngresado;
		}
		else
		{
			productoNegativos=(numeroIngresado*numeroIngresado);
		}
	}

	printf("La suma de los positivos es: %d"
			"\nEl producto de los negativos es: %d", sumaPositivos, productoNegativos);
	return EXIT_SUCCESS;
}
