/*
19. Ingresar un número entero por consola y efectuar la suma de todos los números que le anteceden,
comenzando desde 0 y mostrar el resultado por pantalla
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, numeroIngresado, resultado;
	resultado=0;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	for(i=0; i<numeroIngresado; i++)
	{
		resultado+=numeroIngresado;
	}

	printf("\nEl resultado es: %d", resultado);
	return EXIT_SUCCESS;
}
