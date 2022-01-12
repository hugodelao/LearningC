/* Este programa te permitirá capturar tres enteros y responderá */
/* con la suma, el promedio, el producto, el más pequeño y el mayor */
#include <stdio.h>
main ()
{
	int num1, num2, num3;
	int suma, promedio, producto, pequeño = 0, grande = 0;
	printf("\nEste programa te pedirá tres números enteros y después, calculará la suma, el promedio, el producto, el más pequeño y el más grande.");
	printf("\nEscribe tres números enteros separados por un espacio: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	suma = num1 + num2 + num3;
	producto = num1 * num2 * num3;
	promedio = (num1 + num2 + num3)/3;
	if (num1 < num2)
		pequeño = num1;
	if (num2 < num1)
		pequeño = num2;
	if (num3 < pequeño)
		pequeño = num3;
	if (num1 > num2)
		grande = num1;
	if (num2 > grande)
		grande = num2;
	if (num3 > grande)
		grande = num3;
	printf("\nLa suma de los números es %d.", suma);
	printf("\nEl promedio de los números es %d.", promedio);
	printf("\nEl producto de los números es %d.", producto);
	printf("\nEl número mayor es %d.", grande);
	printf("\nEl número menor es %d.\n", pequeño);
	return 0;
}
