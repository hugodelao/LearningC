/* Este programa te permitirá capturar el principal, tasa y días de un crédito
y te desplegará el interés simple del mismo */
#include <stdio.h>
main()
{
	int contador, dias;
	float principal, tasa, interes;
	principal = 0;
	contador = 0;
	while (principal != -1){
		while(principal == 0) {
			printf("\nCaptura el monto principal del crédito (-1 para terminar): ");
			scanf("%f", &principal);
			if (principal == 0)
				printf("\nEl monto principal no puede ser 0.");}
		if (principal != -1) {
			printf("\nCaptura la tasa de interés anual del crédito: ");
			scanf("%f", &tasa);
			printf("\nCaptura los días transcurridos del crédito: ");
			scanf("%d", &dias);
			interes = (float) principal * tasa * dias / 365;
			printf("\nEl interés por el total de %d días es: $ %.2f", dias, interes);
			dias = 0;
			interes = 0;
			principal = 0;
			tasa = 0;
			++contador;}		
	}
	printf("\nCalculaste un total de %d créditos.\n", contador);
	return 0;
}
