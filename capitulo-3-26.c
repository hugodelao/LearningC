/* Este programa creará una tabla de valores, donde cada uno de los renglones será
3 unidades mayor al siguiente y cada columna será 2 unidades mayor que el anterior */
#include <stdio.h>
main()
{
	int numero = 3, contador = 1;
	printf("\nEste programa creará una tabla con valores, cada número inicial de renglón será 3 unidades mayor al anterior; cada valor de columnas será 2 unidades mayor que el anterior.");
	printf("\nA\tA+2\tA+4\tA+6\n");
	while (contador <= 5) {
		printf("\n%d\t%d\t%d\t%d", numero, numero + 2, numero + 4, numero + 6);
		numero = numero + 3;
		++contador;
	}
	printf("\n");
	return 0;
}
