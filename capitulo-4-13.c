/* Este programa calculará el producto de los números pares entre el 1 y el 15 */
#include <stdio.h>
int main()
{
	int numero, producto;
	producto = 1;
	printf("\n Este programa calculará encontrará los números pares entre 1 y 15 y los multiplicará sucesivamente.");
	printf("\n Al final, te entregará el resultado...");
	for (numero = 1; numero <= 15; numero++){
		if ( numero % 2 != 0)
			producto *= numero;
	}
	printf("\n El producto de los números pares entre 1 y 15 es: %d\n", producto);
	return 0;
}
