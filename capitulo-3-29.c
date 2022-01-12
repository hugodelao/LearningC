/* ¿Qué imprime este programa? */
#include <stdio.h>
main()
{
	int contador = 1;
	printf("\n");
	while (contador <= 10){
		printf("%s\n", contador % 2 ? "****" : "++++++++");
		++contador;
	}
	return 0;
}
