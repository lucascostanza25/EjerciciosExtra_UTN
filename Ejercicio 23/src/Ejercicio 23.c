/*
23. De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, numeroIngresado, numeroMayor;
	numeroMayor=0;

	for(i=0; i<3; i++)
	{
		printf("Ingrese un numero (%d/3): ", i);
		scanf("%d", &numeroIngresado);

		if(numeroIngresado>numeroMayor || i==0)
		{
			numeroMayor=numeroIngresado;
		}
	}

	printf("El numero mayor ingresador es: %d", numeroMayor);
	return EXIT_SUCCESS;
}
