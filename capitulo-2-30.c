/* Este programa leerá un número entero de 5 dígitos y lo separará en 5 números 
mismos que terminará imprimiendo al final */
#include <stdio.h>
main()
{
	int entero1, entero5, i1, i2, i3, i4, i5;
	printf("\nA continuación, le pediré que escriba un número entero de 5 dígitos");
	printf("\nDespués, procederé a serarlo en 5 números independientes, mismos que mostraré");
	printf("\nTeclee un número entero de 5 dígitos: ");
	scanf("%d", &entero1);
	entero5 = entero1;
	i1= entero5 / 10000;
	entero5 = entero5 - i1 * 10000;
	i2= entero5 / 1000;
	entero5 = entero5 - i2 * 1000;
	i3= entero5 / 100;
	entero5 = entero5 - i3 * 100;
	i4= entero5 / 10;
	entero5 = entero5 - i4 * 10;
	printf("\nEl número %d se compone de los siguientes dígitos %d %d %d %d %d.\n", entero1, i1, i2, i3, i4 ,entero5);
	return 0;
}
