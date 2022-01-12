/* Este programa imprime los módulos del 0 al 9 más 7 */
#include <stdio.h>
int main() {
	int contador = 0;
	printf("\nNo.\tMod");
	while (contador <= 9 ) {
		printf("\n%d\t%d", contador, (contador + 7) % 10);
		contador++;
	}
	return 0;
}
