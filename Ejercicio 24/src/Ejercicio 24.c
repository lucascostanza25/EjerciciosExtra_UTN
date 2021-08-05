/*
24. Diseñar en un programa que permita registrar de los empleados de una fábrica (no se sabe cuántos) su peso y saber cuántos pesan hasta 80 kg.
inclusive y cuantos pesan más de 80 kg.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, numeroTope, pesoIngresado, contadorMenor, contadorMayor;
	contadorMenor=0;
	contadorMayor=0;

	printf("Ingrese la cantidad de empleados: ");
	scanf("%d", &numeroTope);

	for(i=0; i<numeroTope; i++)
	{
		printf("\nIngrese el peso del empleado (%d/%d): ", i, numeroTope);
		scanf("%d", &pesoIngresado);

		if(pesoIngresado<=80)
		{
			contadorMenor++;
		}
		else
		{
			contadorMayor++;
		}
	}

	printf("\nLa cantidad de empleados con menos de 80kg son: %d"
			"\nLa cantidad de empleados con mas de 80kg son: %d", contadorMenor, contadorMayor);
	return EXIT_SUCCESS;
}
