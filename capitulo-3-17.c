/* Este programa obtiene el total de millas y litros de gasolina
entregando un calculo de rendimiento total y por registro */
#include <stdio.h>
main()
{
	int contador;
	float litros, kilometros, rendimiento, rendimientototal, litrostotal, kilometrostotal;
	printf("\nA continuación se le pedirán los datos de consumo de combustible (litros y kilómetros) por cada tanque.");
	printf("\nDespués, se entregará un cálculo de rendimiento por tanque y el rendimiento total de los registros.");
	litros = 0;
	contador = 0;
	kilometros = 0;
	while (litros != -1) {
		while (litros == 0) {
			printf("\nPor favor, capture la cantidad de litros comprados (-1 para terminar): ");
			scanf("%f", &litros);
			if (litros == 0)
				printf("\nLa cantidad de litros no puede ser igual a 0."); }
		if (litros != -1) {
			printf("\nPor favor, capture la cantidad de kilómetros recorridos: ");
			scanf("%f", &kilometros);
			while (kilometros == 0) {
				printf("\nLa cantidad de kilómetros recorridos debe ser diferente de 0.");
				printf("\nPor favor, capture la cantidad de kilómetros recorridos: ");
				scanf("%f", &kilometros); }
			rendimiento = kilometros / litros;
			printf("\nEl rendimiento de este tanque fue de %f kilómetros por litro.", rendimiento);
			litrostotal= litrostotal + litros;
			kilometrostotal = kilometrostotal + kilometros;
			litros = 0;
			kilometros = 0;
			++contador; }}
	if (kilometrostotal == 0)
		kilometrostotal = 1;
	rendimientototal = kilometrostotal / litrostotal;
	printf("\nMuy bien, en total registraste %d tanques.", contador);
	printf("\nEl total de litros comprados fue de: %f", litrostotal);
	printf("\nEl total de kilómetros recorridos fue de: %f", kilometrostotal);
	printf("\nEl rendimiento global fue de: %f.\n", rendimientototal);
	return 0;
}
