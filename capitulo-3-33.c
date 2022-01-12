/* Escribirá un cuadro de asteriscos entre 1 a 20 */
#include <stdio.h>
main()
{
	int lado = 0, renglon = 1, columna = 1, correcto = 0;
	while (lado != -1){
		while ( correcto != 1){
			printf("\nEscriba un número entre 1 a 20 (-1 para terminar): ");
			scanf("%d", &lado);
			if (lado > 0)
				if (lado <= 20)
					correcto = 1;
				else
					printf("\nNúmero debe ser menor o igual a 20.");
			else
				if (lado == 0)
					printf("\nEl número no puede ser 0.");
				else
					if (lado < -1)
						printf("\nEl número no puede ser negativo menor a -1.");
					else
						correcto = 1;}
		if (lado != -1){
			while (renglon <= lado){
				while ( columna <= lado){
					printf("*");
					++columna;
				}
				printf("\n");
				columna = 1;
				++renglon;
			}
			printf("\nAsí luce un 'cuadrado' de %d x %d en la pantalla de tu PC.", lado, lado);
			renglon = 1;
			columna = 1;
			correcto = 0;}
		else
			printf("\nNada por hacer.\n");
	}
	return 0;	
}
