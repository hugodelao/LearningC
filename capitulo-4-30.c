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
			else
				if (grade == 'b' || grade =='B')
					++bcount;
				else 
					if (grade == 'c' || grade =='C')
						++ccount;
					else
						if (grade == 'd' || grade =='D')
							++dcount;
						else
							if (grade == 'f' || grade =='F')
								++fcount;
							else 
								if (grade == ' ' || grade == '\n')
									printf("");
								else {
									printf("Calificación incorrecta. Captura la correcta (A, B, C, D, F o EOF para terminar). \n");
								}
		}
	printf("Los totales para cada calificación son:\n");
	printf("A: %d\n", acount);
	printf("B: %d\n", bcount);
	printf("C: %d\n", ccount);
	printf("D: %d\n", dcount);
	printf("F: %d\n", fcount);

	return 0;
}
