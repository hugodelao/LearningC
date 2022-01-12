/* Este programa cifra datos según lo siguiente:
- Remplaza cada dígito por el módulo 10 del dígito mismo mas 7.
- Invierte el primero y tercero, además el segundo y cuarto. 
- Escribe el número cifrado */
#include <stdio.h>
int main ()
{
	int numero = 0, cifrado, correcto = 1, contador = 1, d1, d2, d3, d4, divisor = 1000;
	printf("\nEste programa te permitirá cifrar un número, para que nadie lo descubra.");
	while ( numero != -1){
		printf("\nEscribe un número de 4 dígitos, tiene que ser entero y positivo (-1 para terminar): ");
		scanf("%d", &numero);
		if ( numero != -1)
			if ( numero > 999)
				if ( numero <= 9999 ){
					while ( contador <= 4){
						if (contador == 1){
							contador++;
							d1 = numero / divisor;
							numero -= d1 * divisor;
							divisor /= 10;}
						if (contador == 2){
							contador++;
							d2 = numero / divisor;
							numero -= d2 * divisor;
							divisor /= 10;}
						if (contador == 3){
							contador++;
							d3 = numero / divisor;
							numero -= d3 * divisor;
							divisor /= 10;}
						if (contador == 4){
							contador++;
							d4 = numero / divisor;
							numero -= d4 * divisor;
							divisor /= 10;}
					}
					d1 = (d1 + 7) % 10;
					d2 = (d2 + 7) % 10;
					d3 = (d3 + 7) % 10;
					d4 = (d4 + 7) % 10;
					cifrado = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
					printf("\nEl número cifrado es %d.", cifrado);
					cifrado = 0;
					divisor = 1000;
					}
				else
					printf("\nEl número debe ser menor o igual a 9999.");
			else
				printf("El número debe ser mayor o igual a 1000.");
	}
	return 0;
}
					
