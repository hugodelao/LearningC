/* Este programa determinará si el entero capturado por el usuario es par o impar */
#include <stdio.h>
main()
{
	int num, modulo, impar;
	printf("\nA continuación, te pediré que ingreses un número entero y determinaré si es par o impar.");
	printf("\nEscribe un número entero: ");
	scanf ("%d", &num);
	modulo = num % 2;
	if (modulo == 0)
		printf("\nEl número %d es par.\n", num);
	if (modulo != 0)
		printf("\nEl número %d es impar.\n", num);
	return 0;
} 	
