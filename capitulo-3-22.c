/* Este programa mostrará la diferencia entre postdecrementar y predecrementar */
#include <stdio.h>
main()
{
	printf("\nEste programa demostrará la diferencia entre postdecrementar (post) y predecrementar (pre).");
	int contador1 = 20, contador2 = 20;
	printf("\nPost\tPre");
	while (contador1 != 0){
		printf("\n%d\t%d", contador1, contador2);
		--contador1;
		contador2--;
	}
	printf("\n¿Qué te pereció?\n");
	return 0;
}
