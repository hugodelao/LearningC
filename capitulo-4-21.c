/* Estructura de repetición controlada por contador en la estructura for */
#include <stdio.h>

int main(){
	int counter = 1;
	
	/* Inicialización, condición de repetición e incremento */
	/* Todo incluido en el encabezado de la estructura for  */
	for ( ; counter <= 10 ; counter++)
		printf("%d\n", counter);
	
	return 0;
}
