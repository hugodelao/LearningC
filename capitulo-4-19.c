/* Este programa te permitirá calcular las ventas semanales de 5 productos, según la cantidad vendida */
#include <stdio.h>

int main (){
	int producto, cantidad;
	double total;
	producto = 0;
	total = 0;
	printf("A continuación, se te solicitarán dos pares de números. El primero será el número de producto (entre 1 o 5). El segúndo");
	printf("será la cantidad de productos vendidos en la semana. Para terminar la captura, teclea el número -1.\n");
	while (producto != -1){
	printf("Escribe el número de producto (al terminar presiona <Enter>): ");
	scanf("%d", &producto);
	if (producto != -1){
		printf("Escribe la cantidad de productos vendidos (al terminar presiona <Enter>): ");	
		scanf("%d", &cantidad);}
		switch (producto){
			case 1:
				total += cantidad * 2.98;
				break;
			case 2:
				total += cantidad * 4.50;
				break;
			case 3:
				total += cantidad * 9.98;
				break;
			case 4:
				total += cantidad * 4.49;
				break;
			case 5:
				total += cantidad * 6.87;
				break;
			case -1:
				break;
			default:
				printf("Valor incorrecto. Por favor verifica que el número de producto está entre 1 o 5, o -1 para terminar\n");
				break;
		}
	}
	printf("El total de ventas de la semana fue: $ %.2f\n", total);
	return 0;
}
