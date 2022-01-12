/* Este programa contará del 1 al 3'000,000 y cada vez que llegue a un múltiplo de 1'000,000, imprimirá ese número */
#include <stdio.h>
int main()
{
	int contador = 0, divisor = 1000000;
	while (contador <= 10000000){
		contador +=1;
		if ( contador == divisor ) {
			printf("\nVamos en el %d.\n", contador);
			divisor += 1000000;}
	}
	printf("\nTerminamos.\n");
	return 0;
}
