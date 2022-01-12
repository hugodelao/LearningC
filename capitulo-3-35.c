/* Este programa leerá un número entero de 5 dígitos y lo separará en 5 números 
y te dirá si el número es un palíndromo */
#include <stdio.h>
main()
{
	int entero1, entero5, i1, i2, i3, i4, i5, correcto;
	printf("\nA continuación, le pediré que escriba un número entero positivo de 5 dígitos");
	printf("\nDespués, procederé a serarlo en 5 números independientes, los mostraré y te diré si es un palíndromo.");
	while (entero1 != -1){
		while ( correcto != 1){
			printf("\nTeclee un número entero de 5 dígitos (-1 para terminar): ");
			scanf("%d", &entero1);
			if (entero1 > 9999)
				if (entero1 <= 99999)
					correcto = 1;
				else 
					printf("\nEl número debe ser de 5 dígitos.");
			else
				if (entero1 == -1)
					correcto =1;
				else
					printf("\nEl número debe ser de 5 dígitos y mayor a 0.");}
	if (entero1 != -1){
		entero5 = entero1;
		i1= entero5 / 10000;
		entero5 = entero5 - i1 * 10000;
		i2= entero5 / 1000;
		entero5 = entero5 - i2 * 1000;
		i3= entero5 / 100;
		entero5 = entero5 - i3 * 100;
		i4= entero5 / 10;
		entero5 = entero5 - i4 * 10;
		printf("\nEl número %d se compone de los siguientes dígitos %d %d %d %d %d.\n", entero1, i1, i2, i3, i4 ,entero5);
		if (i1 == entero5)
			if (i2 == i4)
				printf("El número es un palíndromo.\n");
			else
				printf("El número NO es un palíndromo.\n");
		else
			printf("El número NO es un palíndromo.\n");}
	else
		printf("\nNada por hacer.\n");
	correcto = 0;
	}
	return 0;
}
