/* Este programa te pedirá que le indique cuantos números va a evaluar (n),
deberás capturar n números y te dirá cual es el menor de ellos */
#include <stdio.h>

int main ()
{
	int cantidad, minimo, contador, numero;
	cantidad = 0;
	minimo = 0;
	contador = 1;
	numero = 0;
	printf("\nEste programa te pedirá que le indiques cuantos números evaluará (n).");
	printf("\nDespués, te pedirá que los captures y te dirá cual es el menor de todos ellos.");
	printf("\nEscribe la cantidad de números a evaluar (-1 para salir): ");
	scanf("%d", &cantidad);
	if (cantidad != EOF) {
		for (contador = 1; contador <= cantidad; contador++){
			printf("Escribe el número %d a evaluar: ", contador);
			scanf("%d", &numero);
			if (contador == 1)
				minimo = numero;
			if (numero < minimo)
				minimo = numero;
	}
	printf("\nEl número menor es %d.\n", minimo);
	}
	return 0;
}
