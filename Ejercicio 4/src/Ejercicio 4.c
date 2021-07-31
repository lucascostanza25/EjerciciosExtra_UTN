/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno, numeroDos, resultadoResta;

	printf("Ingrese el primer operando: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el primer operando: ");
	scanf("%d", &numeroDos);

	resultadoResta=numeroUno-numeroDos;

	if(resultadoResta<0)
	{
		printf("Resultado negativo!\n");
	}
	else
	{
		printf("Resultado positivo!, %d", resultadoResta);
	}
	return EXIT_SUCCESS;
}
