/* Compara dos valores, escribe si uno es mayor a otro o son iguales */
#include <stdio.h>

main ()
{
	int num1, num2;
	printf("\nA continuación le solicitaré dos números. Después de obtenerlos, le diré cual es mayor o si son iguales.");
	printf("\nEscriba un número entero por favor: ");
	scanf("%d", &num1);
	printf("\nEscriba un número entero por favor: ");
	scanf("%d", &num2);
	if (num1 > num2)
		printf("El número %d es mayor al %d.\n", num1, num2);
	if (num2 > num1)
		printf("El número %d es mayor al %d.\n", num2, num1);
	if (num1 == num2)
		printf("El número %d es igual al %d.\n", num1, num2);
	return 0;
}
