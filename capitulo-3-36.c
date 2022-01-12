/* Este programa te pedirá un número binario y lo transformará en número decimal */
#include <stdio.h>
int main()
{
	int numerobinario, numerodecimal = 0, revision = 1, correcto = 0, final = 0, prueba = 1, previo, masgrande, division = 0, contador, posicion = 1, detectando;
	printf("\nEste programa te pedirá un número binario (compuesto por 0s y 1s) y te mostrará el equivalente decimal.");
	while (correcto != 1){
		contador = 1;
		printf("\nA continuación, escribe un número binario o -1 para terminar.: ");
		scanf("%d", &numerobinario);
		if (numerobinario < -1)
			printf("\nPor el momento, solo puedo calcular valores mayores o iguales a 0.");
		else
			if (numerobinario >= 1000000)
				printf("\nEn este momento no puedo calcular ese valor.");
			else
				correcto = 1;
		previo = numerobinario;
		if ( numerobinario != -1)
			if (correcto == 1 )
				while ( revision == 1 ){
					if ( previo >= prueba ){
						prueba *= 10;
						++contador;
					}
				else
					revision = 0;	
				}
				prueba /= 10;
				--contador;
				while ( contador != 0 ) { 
					division = previo / prueba;
					if (division > 1){
						printf("\nEste número no es binario.\n");
						contador = 0;
						correcto = 0;
						revision = 1;
						prueba = 1; }
					else 
						if ( previo != 0) {
							previo -= division * prueba;
							prueba /= 10;
							--contador;}
						else
							contador = 0;
				}
	}
	while ( numerobinario != 0) {
		detectando = numerobinario % 2;
		if ( detectando != 0 )
			final += posicion;
		posicion *= 2;
		numerobinario /= 10;
		}
	printf("\tN.Bin.\tDiv.\tRev.\tCorr.\tPrueba\tPrevio\n");
	printf("\t%d\t%d\t%d\t%d\t%d\t%d\n", numerobinario, division, revision, correcto, prueba, previo);
	printf("\nEl número decimal es: %d\n", final);
	return 0;
}
