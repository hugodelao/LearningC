/* Este programa calculará el ingreso por vendedor dependiendo de las ventas realizadas
por cada uno de ellos más 200 de ingreso base */
#include <stdio.h>
main()
{
	int contador;
	float ventas, salario;
	ventas = 0;
	contador = 0;
	while (ventas != -1) {
		printf("\nCaptura el total de ventas del vendedor (-1 para salir): ");
		scanf("%f", &ventas);
		if (ventas != -1){
			salario = 200 + ventas * .09;
			printf("\nEl salario del vendedor es: $ %.2f.", salario);
			ventas = 0;
			salario = 0;
			++contador; }
	}
	printf("\nCalculaste un total de %d salarios de vendedores.\n", contador);
	return 0;
}
