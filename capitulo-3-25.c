/* Este programa escribirá en tre columnas, los múltiplos de los números del 1 al 10 que en ellas se indican */
#include <stdio.h>
main()
{
	int contador = 1;
	printf("\nEste programa mostrará los números del 1 al 10 y sus múltiplos por decenas, centenas y unidades.");
	printf("\nN\t10*N\t100*N\t1000*N");
	while (contador <= 10){
		printf("\n%d\t%d\t%d\t%d",contador,contador*10,contador*100,contador*1000);
		++contador;
	}
	printf("\n");
	return 0;
}
