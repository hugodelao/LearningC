/* Este programa leerá un entero (n) y posteriormente, solicitará que se capuren
otros (n) números enteros que serán sumados */
#include <stdio.h>
int main ()
{
	int cantidad, promedio, numero, contador;
	cantidad = 0;
	promedio = 0;
	numero = 0;
	printf("\nEste programa te pedirá que teclees un número (n). Después, te pedirá que escribas (n) números adicionales y calculará el promedio.");
	printf("\nEscribe la cantidad de números que deseas promediar.");
	scanf("%d", &cantidad);
	for (contador = 1; contador <= cantidad; contador++) {
		scanf("%d", &numero);
		promedio += numero;
	}
	promedio /= cantidad;
	printf("\nEl promedio es %d.\n", promedio);
	return 0;
}
