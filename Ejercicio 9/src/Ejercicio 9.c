/*
9. Escribir un programa que realice lea por teclado 20 caracteres.
Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);
	char string[20]="aaaaabbeeeiioou";
	int i, contador_a, contador_e, contador_o, contador_u;
	contador_a=0;
	contador_e=0;
	contador_u=0;
	contador_o=0;

	printf("Cadena original: %s\n", string);

	for(i=0; i<strlen(string); i++)
	{
		if(string[i]=='a')
		{
			contador_a++;
		}
		else if(string[i]=='e')
		{
			contador_e++;
		}
		else if(string[i]=='o')
		{
			contador_o++;
		}
		else if(string[i]=='u')
		{
			contador_u++;
		}
	}

	printf("La cantidad de letras 'a' ingresadas es: %d\n"
			"La cantidad de letras 'e' ingresadas es: %d\n"
			"La cantidad de letras 'o' ingresadas es: %d\n"
			"La cantidad de letras 'u' ingresadas es: %d\n", contador_a, contador_e, contador_o, contador_u);

	return EXIT_SUCCESS;
}
