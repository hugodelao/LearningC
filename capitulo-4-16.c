/* Este programa dibujará 4 triangulos rectángulos con puros asteriscos "*" */
#include <stdio.h>
int main()
{
	int contador1, contador2, contador3;
	for (contador3 = 1; contador3 <= 4; contador3++) {
		for (contador1 = 1; contador1 <= 10; contador1++){
			switch (contador3) {
				case 1:
					for (contador2 = 1; contador2 <= contador1; contador2++)
							printf("*");
					break;
				case 2:
					for (contador2 = 10; contador2 >= contador1; contador2--)
						printf("*");
					break;
				case 3:
					for (contador2 = 1; contador2 <= 10; contador2++)
						if ( contador1 == 1)
							printf("*");
						else
							if ( contador2 > contador1 - 1)
								printf("*");
							else
								printf(" ");
					break;
				case 4:
					for (contador2 = 10; contador2 >= 1; contador2--)
						if ( contador1 == 10)
							printf("*");
						else
							if ( contador2 < contador1 + 1)
								printf("*");
							else
								printf(" ");
					break;			}
		printf("\n");
		}
	printf("\n");
	}
	return 0;
}
