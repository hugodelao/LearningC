/* Este programa cifra datos según lo siguiente:
- Remplaza cada dígito por el módulo 10 del dígito mismo mas 7.
- Invierte el primero y tercero, además el segundo y cuarto. 
- Escribe el número cifrado */
#include <stdio.h>
int main ()
{
	int numero = 0, cifrado, correcto = 1, contador = 1, d1 = 0, d2= 0, d3 = 0, d4 = 0, divisor = 1000;
	printf("\nEste programa te permitirá decifrar un número, para que lo conozcas.");
	while ( numero != -1){
		printf("\nEscribe el número cifrado de 4 dígitos (-1 para terminar): ");
		scanf("%d", &numero);
		if ( numero != -1)
			if ( numero > 999)
				if ( numero <= 9999 ){
					printf("\nBien, una vez terminado, aquí verás la respuesta.");
					while ( contador <= 4){
						if (contador == 1){
							contador++;
							d1 = numero / divisor;
							numero -= d1 * divisor;
							divisor /= 10;
							if (d1 == -1)
								d1 = 0;}
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
					d1 = (d1 + 3) % 10;
					d2 = (d2 + 3) % 10;
					d3 = (d3 + 3) % 10;
					d4 = (d4 + 3) % 10;
					cifrado = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
					printf("\nEl número decifrado es %d.", cifrado);
					printf("\nLos dígitos a cifrar son %*d%*d%*d%*d.",1,d1,1,d2,1,d3,1,d4);
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
					
