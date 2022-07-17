/* Calculando el promedio de calificación de la clase */
#include <stdio.h>

int main(){
	int grade;
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, fcount = 0, tcount = 0, promedio = 0;

	printf("Captura las calificaciones en letra (A, B, C, D, F).\n");
	printf("Captura el caracter EOF para terminar.\n");
	
	while ((grade = getchar() ) != EOF){
			if (grade == 'a' || grade == 'A')
				++acount;
			if (grade == 'b' || grade =='B')
				++bcount;
			if (grade == 'c' || grade =='C')
				++ccount;
			if (grade == 'd' || grade =='D')
				++dcount;
			if (grade == 'f' || grade =='F')
				++fcount;
			if (grade == ' ' || grade == '\n')
				printf("");
			if (grade != 'a' && grade != 'A' && grade != 'b' && grade != 'B' && grade != 'c' && grade != 'C' && grade != 'd' && grade != 'D' && 
			grade != 'f' && grade != 'F' && grade != ' ' && grade != '\n')
 				printf("Calificación incorrecta. Captura la correcta (A, B, C, D, F o EOF para terminar). \n");
	}
	printf("Los totales para cada calificación son:\n");
	printf("A: %d\n", acount);
	printf("B: %d\n", bcount);
	printf("C: %d\n", ccount);
	printf("D: %d\n", dcount);
	printf("F: %d\n", fcount);

	return 0;
}
