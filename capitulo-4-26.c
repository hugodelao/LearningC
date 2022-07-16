/* Cálculo del valor de Pi*/
#include <stdio.h>

int main () {
	float pi = 4;
	int iteracion, divisor = 3, cambio = 0, limite = 0;
	printf("¿Cuantas iteraciones ejecuto?");
	scanf("%d", &limite);
	for (iteracion = 1; iteracion <= limite ; iteracion++){
		if (cambio == 0){
			pi-= (float) 4 / divisor;
			cambio = 1;
		}
		else {
			pi+= (float) 4 / divisor;
			cambio = 0;
		}
		printf("Para la iteración %5d el valor de Pi es: %f\n", iteracion, pi);
		divisor += 2;
	}
	return 0;
}
