/* Este programa escribirá 10 renglones con 10 asteriscos (*) cada uno */
#include <stdio.h>
int main ()
{
	int renglon = 1, columna = 1, division = 0;
	printf("\n");
	while ( renglon <= 8 ) {
		while ( columna <= 8 ){
			printf("* ");
			columna++;
		}
		if (columna > 8) {
			printf("\n");
			columna = 1; }
		division = renglon % 2;
		if (division != 0)
			printf(" ");
		renglon++;
	}
	return 0;
}
