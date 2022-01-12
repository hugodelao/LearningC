/* Este programa lee 5 enteros y determina el mayor y el menor del grupo */
#include <stdio.h>
main()
{
	int n1, n2, n3, n4, n5, mayor = 0, menor;
	printf("\nA continuación te pediré 5 enteros y determinare el menor y el mayor del grupo.");
	printf("\nEscribe 5 enteros, separados por un espacio: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	menor = n1;
	if (n2 < menor)
		menor = n2;
	if (n3 < menor)
		menor = n3;
	if (n4 < menor)
		menor = n4;
	if (n5 < menor)
		menor = n5;
	mayor = n1;
	if (n2 > mayor)
		mayor = n2;
	if (n3 > mayor)
		mayor = n3;
	if (n4 > mayor)
		mayor = n4;
	if (n5 > mayor)
		mayor = n5;
	printf("\nLos números son %d %d %d %d %d.", n1, n2, n3, n4, n5);
	printf("\nEl número mayor es %d y el menor es %d.\n", mayor, menor);
	return 0;
}
