/* Este programa, calculará los números factoriales del 1 al 15 */
#include <stdio.h>
int main()
{
	int numero, componentes;
	long factorial;
	factorial = 1;
	printf("\n Este programa calculará los factoriales de los número 1 al 15.");
	printf("\n\tNúmero\tFactorial\n");
	for (numero = 1; numero <= 5; numero++){
		for (componentes = 1; componentes <= numero; componentes++)
			factorial *= componentes;
		printf("\t%d\t%d\n", numero, factorial);
		factorial = 1;
	}
	return 0;
}
