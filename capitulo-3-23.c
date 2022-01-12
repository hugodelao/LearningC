/* Este programa escribirá los números de 1 al 10 en un solo renglón separados por 3 espacios cada uno */
#include <stdio.h>
main()
{
	int contadorrenglon, numero, espacios, limite;
	numero = 1;
	espacios = 0;
	contadorrenglon = 0;
	printf("\nEscribe el número límite: ");
	scanf("%d", &limite);
	printf("\n");
	while (contadorrenglon <= limite){
		if (numero > 10)
			numero = 1;
		printf("%d", numero);
		++contadorrenglon;
		if (numero == 10)
			++contadorrenglon;
		while (espacios <= 2) {
			printf(" ");
			++espacios;
			++contadorrenglon;}
		if (espacios == 3)
			espacios = 0;
		++numero;}
	printf("\nEso es todo.\n");
	return 0;
}			
