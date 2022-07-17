/* Cálculo de pago de nómina entre 4 tipos de empleados */
#include <stdio.h>

int main(){
	int noempleado;
	float salsemana, semana, hora, salhora, ventas, salpieza, pieza;

	while (noempleado != EOF){
		printf("Escribe el número de empleado (1 a 4) o Ctrl-C para terminar.\n");
		scanf("%d", &noempleado);
		switch (noempleado){
			case 1:
				printf("Vamos a calcular el sueldo de un gerente.\n");
				printf("Escribe el salario semanal del gerente: ");
				scanf("%f", &salsemana);
				printf("Escribe el número de semanas a pagar: ");
				scanf("%f", &semana);
				printf("El salario por %.2f semanas a una tarifa de %.2f por semana es de: %.2f\n", semana, salsemana, semana * salsemana);
				break;
			case 2:
				printf("Vamos a calcular el sueldo de un trabajador horario.\n");
				printf("Escribe el salario por hora del empleado: ");
				scanf("%f", &salhora);
				printf("Escribe el número de horas a pagar: ");
				scanf("%f", &hora);
				printf("El salario por %.2f horas a una tarifa de %.2f por hora es de: %.2f\n", hora, salhora, (salhora * 40) + (hora - 40) *
				1.5 * salhora );
				break;		
			case 3:
				printf("Vamos a calcular el sueldo de un trabajador por comisión.\n");
				printf("Escribe el total de ventas del empleado: ");
				scanf("%f", &ventas);
				printf("El salario por %.2f de ventas a 5.70%% de comisión asciende a: %.2f\n", ventas, 250 + ventas * .057);
				break;
			case 4:
				printf("Vamos a calcular el sueldo de un empleado a destajo.\n");
				printf("Escribe el salario por pieza a pagar: ");
				scanf("%f", &salpieza);
				printf("Escribe el número de piezas a pagar: ");
				scanf("%f", &pieza);
				printf("El salario por %f piezas a una tarifa de %.2f por pieza es de: %.2f\n", pieza, salpieza, pieza * salpieza);
				break;
			case -1:
				break;
			default:
				printf("Solo se permiten valores enteros del 1 al 4, estos inclusive. Vuelve a internarlo.\n");
				break;
		}
	}
	return 0;
}
