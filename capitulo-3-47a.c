/* Este programa te pedirá que escribas un número entero positivo y calculará el número factorial */
#include <stdio.h>
int main()
{
	int numero = 0, multiplicador = 0, original;
	long factorial = 1;
	while (numero != -1) {
		printf("\nEste programa te pedirá que ingreses un número entero positivo, después calculará el factorial del mismo (n!).");
		printf("\nEscribe un número entero positivo (-1 para terminar): ");
		scanf("%d", &numero);
		original = numero;
		if (numero != -1)
			if (numero > 0){
				while (numero != 0) {
					multiplicador++;
					factorial = (long) factorial * multiplicador;
					numero--;
				}
				printf("\nEl factorial del número %d es %d.\n", original, factorial);
				multiplicador = 0;
				factorial = 1;}
			else
				printf("\nEl número debe ser positivo.\n");
	}
	return 0;
}
