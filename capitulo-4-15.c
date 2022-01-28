/* Este programa calculará el interés compuesto */
#include <stdio.h>
#include <math.h>
int main()
{
	int año, contador;
	double monto, principal, tasa;
	principal = 1000.0;
	tasa = .05;
	for (contador = 1; contador <= 6; contador++) {
		printf("Tasa %.2f\%\n", tasa * 100);
		printf("%4s%21s\n", "Año", "Monto de deposito");
		for (año = 1; año <= 10; año++) {
			monto = principal * pow(1.0 + tasa, año);
			printf("%4d%21.2f\n", año, monto);
		}
		tasa += .01;
	}
	return 0;
}
