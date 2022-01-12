/* Este programa no sirve, porque imprimirá números infinitos */
#include <stdio.h>
int main ()
{
	int contador = 1, multiplo = 1;
	while (contador != 100){
		multiplo *= 2;
		printf("%d ", multiplo);
		++contador;
	}
	return 0;
}
