/*
2. Escribir el programa necesario para calcular la suma de dos números. Mostrar el resultado
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int primerOperando, segundoOperando, resultado;

	printf("Ingrese el primer operando: ");
	scanf("%d", &primerOperando);
	printf("Ingrese el segundo operando: ");
	scanf("%d", &segundoOperando);

	resultado=primerOperando+segundoOperando;
	printf("El resultado de la suma es: %d", resultado);
	return EXIT_SUCCESS;
}
