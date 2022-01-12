/* Este programa escribirá 10 renglones con 10 asteriscos (*) cada uno */
#include <stdio.h>
int main ()
{
	int contador = 1, columna = 1, division = 0;
	printf("\n");
	while ( contador <= 100 ) {
		printf("*");
		columna += 1;
		division = contador % 10;
		if ( division == 0 )
			printf("\n");
		contador++;
	}
	return 0;
}
		
