/* Calculando el promedio de calificación de la clase */
#include <stdio.h>

int main(){
	int grade;
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, fcount = 0, tcount = 0, promedio = 0;

	printf("Captura las calificaciones en letra (A, B, C, D, F).\n");
	printf("Captura el caracter EOF para terminar.\n");
	
	while ((grade = getchar() ) != EOF){
		switch (grade){
			case 'A': case 'a':
				++acount;
				++tcount;
				break;
			case 'B': case 'b':
				++bcount;
				++tcount;
				break;
			case 'C': case 'c':
				++ccount;
				++tcount;
				break;
			case 'D': case 'd':
				++dcount;
				++tcount;
				break;
			case 'F': case 'f':
				++fcount;
				++tcount;
				break;
			case '\n': case ' ':
				break;
			default:
				printf("Calificación incorrecta. Captura la correcta (A, B, C, D, F o EOF para terminar). \n");
				break;
		}
	}
	promedio = ( acount * 'A' + bcount * 'B' + ccount * 'C' + dcount * 'D' + fcount * 'F' ) / tcount;
	printf("Los totales para cada calificación son:\n");
	printf("A: %d\n", acount);
	printf("B: %d\n", bcount);
	printf("C: %d\n", ccount);
	printf("D: %d\n", dcount);
	printf("F: %d\n", fcount);
	printf("Promedio: %c.\n", promedio);

	return 0;
}
