/* Este programa escribirá los cuadrados y los cubos de los números de 0 al 10
en una tabla separada por tabuladores */
#include <stdio.h>
#include <math.h>
main()
{
	printf("\nNúmero\tCuad.\tCubo");
	printf("\n%d\t%d\t%d", 0, 0, 0);
	printf("\n%d\t%d\t%d", 1, 1, 1);
	printf("\n%d\t%d\t%d", 2, 2*2, 2*2*2);
	printf("\n%d\t%d\t%d", 3, 3*3, 3*3*3);
	printf("\n%d\t%d\t%d", 4, 4*4, 4*4*4);
	printf("\n%d\t%d\t%d", 5, 5*5, 5*5*5);
	printf("\n%d\t%d\t%d", 6, 6*6, 6*6*6);
	printf("\n%d\t%d\t%d", 7, 7*7, 7*7*7);
	printf("\n%d\t%d\t%d", 8, 8*8, 8*8*8);
	printf("\n%d\t%d\t%d", 9, 9*9, 9*9*9);
	printf("\n%d\t%d\t%d\n", 10, 10*10, 10*10*10);
	return 0;
}
