/* Este programa te pedirá que escribas un número entero positivo y calculará el número factorial */
#include <stdio.h>
int main()
{
	int numero = 0, multiplicador = 0, original;
	long factorial = 1;
	float constante = 1;
	while (numero != -1) {
		printf("\nEste programa te pedirá que ingreses un número entero positivo, después calculará una aproximación de la constante e.");
		printf("\nEscribe un número entero positivo (-1 para terminar): ");
		scanf("%d", &numero);
		original = numero;
		if (numero != -1)
			if (numero > 0){
				while (numero != 0) {
					multiplicador++;
					factorial = (long) factorial * multiplicador;
					constante += (float)1/factorial;
					numero--;
				}
				printf("\nLa aproximación a la constante e con el número %d es %.20f.\n", original, constante);
				multiplicador = 0;
				factorial = 1;
				constante = 1;}
			else
				printf("\nEl número debe ser positivo.\n");
	}
	return 0;
}
