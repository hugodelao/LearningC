/* Este programa analizará los resultados de los exámenes */
#include <stdio.h>
main()
{
	int aprobado = 0, reprobado = 0, estudiante = 1, resultado, correcto = 0;
	while ( estudiante <= 10) {
		while (correcto != 1){
			printf ("\n Escribe el resultado (1 = aprobado, 2 = reprobado): ");
			scanf("%d", &resultado);
			if ( resultado >= 1 )
				if (resultado <= 2)
					correcto = 1;
			else
				printf("\nEl valor capturado es diferente a 1 o 2.");}
		if (resultado == 1)
			++aprobado;
		else
			++reprobado;
		++estudiante;
		correcto = 0;
	}
	printf("\nAprobados: %d", aprobado);
	printf("\nReprobado: %d", reprobado);
	if (aprobado > 8)
		printf("\nIncremente la colegiatura.\n");
	return 0;
}
