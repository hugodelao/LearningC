/* Determinar si un número es múltiplo del otro */
#include <stdio.h>
main()
{
	int n1, n2, mayor, menor, modulo;
	printf("\nA continuación te pediré escribas un par de números, después determinaré si uno es múltiplo del otro");
	printf("\nEscribe dos números enteros separados por espacios: ");
	scanf("%d%d", &n1, &n2);
	if (n1 < n2)
		menor = n1;
	if (n2 < n1)
		menor = n2;
	if (n1 > n2)
		mayor = n1;
	if (n2 > n1)
		mayor = n2;
	modulo = mayor % menor;
	if (modulo == 0)
		printf("\nEl número %d es multiplo de %d.\n", mayor, menor);
	if (modulo != 0)
		printf("\nEl número %d no es multiplo de %d.\n", mayor, menor);
	return 0;
}
