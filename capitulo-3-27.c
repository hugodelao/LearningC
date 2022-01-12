/* Este programa te pedirá capturar 10 número y eligirá y mostrará al mayor de ellos */
#include <stdio.h>
main()
{
	int numero, contador, masgrande, segundo;
	printf("\nEste programa te pedirá capturar 10 números enteros. Calculará y te mostrará los dós números más grandes del conjunto.");
	contador = 1;
	masgrande = 0;
	segundo = 0;
	printf("\n");
	while (contador <= 10) {
		printf("Escribe un número entero: ");
		scanf("%d", &numero);
		if (numero > masgrande){
			if ( segundo < masgrande )
					segundo = masgrande;
			masgrande = numero;}
		else {
			if ( numero < masgrande )
				if ( numero > segundo) 
					segundo = numero;}
		++contador;
	}
	printf("\nEl dos números más grandes de los capturados son %d y %d.\n", masgrande, segundo);
	return 0;
}	
