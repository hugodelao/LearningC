/* Este programa te pedirá que escribas un número entero positivo y calculará el número factorial */
#include <stdio.h>
int main()
{
	int x = 0, numero = 1, multiplicador = 0, limite = 1, otrolimite;
	float constante = 1;
	long factorial = 1, xe = 1;
	while ( x != -1 ){
		printf("\nEscribe un número que será la x de e^x: ");
		scanf("%d", &x);
		if ( x != -1)
			if ( x > 0 ){
				while ( limite <= 10 ){
					multiplicador++;
					factorial = (long) factorial * multiplicador;
					xe *= x;
					constante += (float) xe / factorial;
					limite++;
				}
				printf("\nExcelente, el de función e^x es: %.10f\n", constante);}
			else
				printf("\nEl número no es -1 pero es negativo y eso está mal.\n");
	}
	return 0;
}
