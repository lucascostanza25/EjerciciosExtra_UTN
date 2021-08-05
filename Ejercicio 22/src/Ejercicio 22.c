/*
22. Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2 se intercambien los valores de las variables,
es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno, numeroDos, auxiliar;

	printf("Ingrese el numero uno: ");
	scanf("%d", &numeroUno);

	printf("Ingrese el numero dos: ");
	scanf("%d", &numeroDos);

	printf("El numero uno original es: %d\n"
			"El numero dos original es: %d", numeroUno, numeroDos);

	//Inicio burbujeo
	auxiliar=numeroUno;
	numeroUno=numeroDos;
	numeroDos=auxiliar;
	//fin burbujeo

	printf("\nEl numero uno nuevo es: %d\n"
			"El numero dos nuevo es: %d", numeroUno, numeroDos);

	return EXIT_SUCCESS;
}
