/* Este programa te pedirá capturar 10 número y eligirá y mostrará al mayor de ellos */
#include <stdio.h>
main()
{
	int numero, contador, masgrande;
	printf("\nEste programa te pedirá capturar 10 números enteros. Calculará y te mostrará el número más grande del conjunto.");
	contador = 1;
	masgrande = 0;
	printf("\n");
	while (contador <= 10) {
		printf("Escribe un número entero: ");
		scanf("%d", &numero);
		if (numero > masgrande)
			masgrande = numero;
		++contador;
	}
	printf("\nEl número más grande de los capturados es %d.\n", masgrande);
	return 0;
}	
