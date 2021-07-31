/*
3. Escribir un programa que realice las siguientes acciones
- Limpie la pantalla
- Asigne a 2 variables numero1 y numero2 valores distintos de cero
- Efectúe el producto de dichas variables
- Muestre el resultado pos pantalla
- Obtenga el cuadrado de numero1 y lo muestre par pantalla
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno, numeroDos, producto, cuadradoNumeroUno;

	printf("Ingrese el primer operando: ");
	scanf("%d", &numeroUno);
	while(numeroUno==0)
	{
		printf("Por favor, ingrese un numero distinto de 0: ");
		scanf("%d", &numeroUno);
	}

	printf("Ingrese el primer operando: ");
	scanf("%d", &numeroDos);
	while(numeroDos==0)
	{
		printf("Por favor, ingrese un numero distinto de 0: ");
		scanf("%d", &numeroDos);
	}

	producto=numeroUno*numeroDos;

	cuadradoNumeroUno=numeroUno*numeroUno;

	printf("El producto de los dos operandos es: %d", producto);
	printf("\nEl cuadrado del primer operando es: %d", cuadradoNumeroUno);
	return EXIT_SUCCESS;
}
