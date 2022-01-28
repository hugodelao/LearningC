/* Este programa analizará tres clientes, reducirá su límite de crédito a la mitad
y determinará cual de ellos excede su nuevo límite de crédito */
#include <stdio.h>
int main ()
{
	int cuenta, contador;
	double saldo, limite;
	printf("\nEste programa, te permitirá analizar el estado de 3 clientes, una vez que se reduce a la mitad su límite de crédito.");
	for (contador = 1; contador <= 3; contador++) {
		printf("\nEscribe el número de cuenta del cliente: ");
		scanf("%d", &cuenta);
		printf("Escribe el límite de crédito del cliente antes de la recesión: ");
		scanf("%lf", &limite);
		printf("Escribe el saldo actual del cliente: ");
		scanf("%lf", &saldo);
		limite /= 2;
		printf("El nuevo saldo del cliente es: %.2f.", limite);
		if (saldo > limite)
			printf(" El saldo del cliente supera este limite por %.2f\n", saldo - limite);
		else
			printf(" El saldo del cliente es inferior al límite por %.2f\n", limite - saldo);
	}
	return 0;
}

