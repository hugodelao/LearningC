/* Este programa leerá 5 números y creará un histograma de * */
#include <stdio.h>
int main ()
{
	int numero, contador, contador1;
	printf("\nEste programa te pedirá 5 números. Después, dibujará una línea de asteriscos. ¡Bien bonito todo!");
	for (contador1 = 1; contador1 <= 5; contador1++) {
		printf("\nEscribe un número entero entre 1 a 30: ");
		scanf("%d", &numero);
		if (numero < 0 || numero > 30) {
			contador1--;
			printf("\nEl número debe estar entre 1 y 30 (estos inclusive).");
		}
		else {
			printf("%d\t",numero);
			for (contador = 1; contador <= numero; contador++)
				printf("*");
		}
	printf("\n");
	}
	return 0;
}
