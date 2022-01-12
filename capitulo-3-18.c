/* Este programa registra la cuenta, el saldo inicial, los cargos, los abonos y el límite de crédito
después, define si el cliente excedió o no su límite de crédito */
#include <stdio.h>
main()
{
	int cuenta,contador;
	float inicial, cargos, abonos, limite, balance;
	cuenta = 0;
	contador = 0;
	printf("\nEste programa te permitirá determinar si un cliente excedió su límite de crédito.");
	printf("\nTen en cuenta, que para cada cliente deberás de tener el número de cuenta, el saldo inicial,");
	printf("\nLas compras realizadas y los pagos registrados.");
	while (cuenta != -1) {
		while (cuenta == 0) {
			printf("\nPor favor, registra el número de cuenta (-1 para terminar): ");
			scanf ("%d", &cuenta);
			if (cuenta == 0)
				printf("\nLa cuenta no puede ser 0.");}
		if (cuenta != -1) {
			printf("\nRegistra el saldo inicial del crédito del cliente %d: ", cuenta);
			scanf("%f", &inicial);
			printf("\nRegistra las compras realizadas por el cliente %d: ", cuenta);
			scanf("%f", &cargos);
			printf("\nRegistra los pagos registrados para el cliente %d: ", cuenta);
			scanf("%f", &abonos);
			printf("\nRegistra el límite de crédito del cliente %d: ", cuenta);
			scanf("%f", &limite);
			balance = inicial + cargos - abonos;
			printf("\nCuenta número: %d", cuenta);
			printf("\nLímite de crédito: %.2f", limite);
			printf("\nBalance: %.2f", balance);
			if (balance > limite)
				printf("\nEl cliente %d ha excedido su crédito por %.2f.", cuenta, balance - limite);
			else
				printf("\nEl cliente %d tiene un crédito por %.2f.", cuenta, limite - balance);
			cuenta = 0;
			cargos = 0;
			abonos = 0;
			inicial = 0;
			balance = 0;
			++contador;
			}
		}
	printf("\nCalculaste un total de %d clientes.\n", contador); 
	return 0;
}

			
						
