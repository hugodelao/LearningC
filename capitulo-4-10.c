/* Este programa, te pedira que captures enteros y cuando captures 9999 terminará, calculará
el promedio y te lo informará */
#include <stdio.h>

int main()
{
	int numero, contador, promedio;
	contador = 0;
	promedio = 0;
	printf("\nEste programa te pedirá que captures diversos numeros enteros y al final calculará el promedio de todos ellos.");
	do { 
		printf("\n Escribe un número entero (9999 para terminar): ");
		scanf("%d", &numero);
		if (numero != 9999) {
			promedio += numero;
			contador++;
		}
	} while (numero != 9999);
	promedio /= contador;
	printf("\nEl promedio es %d.\n", promedio);
	return 0;
}
