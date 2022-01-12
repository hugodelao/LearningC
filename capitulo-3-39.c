/* Este programa pedirá un entero y determinará cuantos dígitos de ese número son 7 */
#include <stdio.h>
int main ()
{
	int numero, cuenta = 0, division = 0, previo, prueba = 1;
	printf("\nEste programa te pedirá un número, después determinará cuántos dígitos son iguales a siete. El número debe ser entero.");
	while ( numero != -1 ){
		printf("\nEscribe un número entero (-1 para terminar): ");
		scanf("%d", &numero);
		if ( numero != -1 ){
			if (numero > 0)
				while ( numero >= prueba ) {
					prueba *= 10 ;
				}
			else {
				numero *= -1;			
				while ( numero >= prueba ) {
					prueba *= 10 ; }
				numero *= -1;
			}
			prueba /= 10;
			previo = numero;
			while (previo != 0){
				division = previo / prueba;
				if ( division == 7 )
					cuenta++;
				previo -= division * prueba;
				prueba /= 10;
			}
		if (cuenta == 0){
			printf("\nEl número %d, no contiene dígitos 7", numero);
			prueba = 1;}
		else {
			printf("\nEl número %d, contiene %d dígitos 7", numero, cuenta);
			cuenta = 0;
			prueba = 1;}
		}
	}
	return 0;
}
