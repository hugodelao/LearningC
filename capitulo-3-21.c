/* Este programa calculará el salario de los empleados tanto para las 40 horas
reglamentarias como para los excedentes en horas */
#include <stdio.h>
main()
{
	int contador;
	float horas, costo, salario, excedente;
	contador = 0;
	horas = 0;
	printf("\nEste programa te permitirá calcular el salario bruto para cada empleado.");
	printf("\nDeberás tener a la mano la lista que incluya las horas trabajadas por empleado y la tarifa por hora.");
	while (horas != -1) {
		while (horas == 0) {
			printf("\nEscribe la cantidad de horas trabajadas por el empleado (-1 para terminar): ");
			scanf("%f", &horas);
			if (horas == 0)
				printf("\nEl número de horas no puede ser 0."); }
		if (horas != -1){
			printf("\nEscribe la tarifa por hora del empleado (00.00): ");
			scanf("%f", &costo);
			if (horas > 40){
				excedente = horas - 40;
				horas = 40;}
			salario = horas * costo + excedente * costo * 1.5;
			printf("\nEl salario de este empleado será de %.2f.", salario);
			salario = 0;
			horas = 0;
			costo = 0;
			excedente = 0;
			++contador;
			}
		}
	printf("\nCalculaste el salario de %d empleados.\n",contador);
	return 0;
}
