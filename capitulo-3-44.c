/* Este programa determinará si 3 valores dados representan los lados de un triángulo */
#include <stdio.h>
int main()
{
	float a, b, c, correcto = 1;
	printf("\nEste programa te pedirá tres números y determinará si pueden ser o no, lados de un triángulo.");
	while (a != -1 ) {
		printf("\nEscribe el valor para el lado A (-1 para terminar): ");
		scanf("%f", &a);
		if ( a != -1 ){
			if ( a == 0 ){
				printf("\nEl lado debe ser mayor a 0.");
				correcto = 0;}
			else{
				printf("Escribe el valor para el lado B: ");
				scanf("%f", &b);
				if ( b == 0 ) {
					printf("\nEl lado debe ser mayor a 0.");
					correcto = 0;}
				else {
					printf("Escribe el valor para el lado C: ");
					scanf("%f", &c);
					if ( c == 0 ){
						printf("\nEl lado debe ser mayor a 0.");
						correcto = 0;}
				}
			}
			if ( correcto == 1 )
				if ( a + b > c )
					if ( a + c > b )
						if ( b + c > a )
							printf("\nLos lados %.4f, %.4f y %.4f, representan los lados de un triángulo.", a, b, c);
						else
							printf("\nLos lados %.4f, %.4f y %.4f, NO representan los lados de un triángulo.", a, b, c);
					else
						printf("\nLos lados %.4f, %.4f y %.4f, NO representan los lados de un triángulo.", a, b, c);
				else
					printf("\nLos lados %.4f, %.4f y %.4f, NO representan los lados de un triángulo.", a, b, c);
			}
	correcto = 1;
	}
	return 0;
}
