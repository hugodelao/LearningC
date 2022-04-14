/* Calculando el interés compuesto */
#include <stdio.h>
#include <math.h>

int main (){
	int year = 0, amount, principal = 100000, decimales, enteros;
	double rate = 0.05;
	
	printf("%4s%21s\n", "Año", "Monto depositado");
	
	for (year = 1 ; year <= 10 ; year++) {
		amount = (double) principal * pow (1.0 + rate, year);
		decimales = amount % 100;
		enteros = amount / 100;
		if ( decimales < 10 ) 
			printf("%4d%21d.0%d\n", year, enteros, decimales);
		else
			printf("%4d%21d.%d\n", year, enteros, decimales);
	}
	return 0;
}
