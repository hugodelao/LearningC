/* Dibujando un diamante con estructuras for */
#include <stdio.h>

int main()
{
	int limite = 9, espacios, asteriscos, n = 5, x = 1, renglon;

	for ( renglon = 1; renglon <= limite - 4; renglon++){
		for (espacios = 1; espacios <= limite - n; espacios++)
			printf(" ");
		for (asteriscos = 1; asteriscos <= x; asteriscos++)
			printf("*");
	n++;
	x += 2;
	printf("\n");
	}
	n = 1;
	x = 7;
	for ( renglon; renglon <= limite; renglon++){
		for (espacios = 1; espacios <= n; espacios++)
			printf(" ");
		for (asteriscos = 1; asteriscos <= x; asteriscos++)
			printf("*");
	n++;
	x -= 2;
	printf("\n");
	}
	return 0;
}
