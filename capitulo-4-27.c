/* Ternas pitagóricas de los números comprendidos entre el 1 y el 500 */
#include <stdio.h>
#include <math.h>

int main (){
	double a, b, c, limite = 500;
	printf("%10s%10s%10s\n", "A²", "B²", "C²");
	for (a = 1; a <= limite; a++)
		for (b = 1; b <= limite; b++)
			for (c = 1; c <= limite; c++){
				if ( (pow (a, 2) + pow (b, 2) - pow(c, 2)) == 0)
					printf("%10.0f%10.0f%10.0f\n", a, b, c);
	}
	return 0;
}
