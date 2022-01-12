/* Este programa te pedirá que escribas el radio de un círculo y te entregará el diámetro */
/* el perímetro y el área del mismo */
#include <stdio.h>
main ()
{
	float radio, pi = 3.14159;
	printf("\nEste programa te pedirá el radio del círculo y te entregará el diámetro, perímetro, y área del mismo.");
	printf("\nEscribe un número entero que represente el radio de un círculo: ");
	scanf ("%f", &radio);
	printf("\nEl radio del círculo es: %f.", radio);
	printf("\nEl diámetro del círculo es: %f.", radio * 2);
	printf("\nEl perímetro del círculo es: %f.", radio * 2 * pi);
	printf("\nEl área del círculo es: %f.\n", radio * radio * pi);
	return 0;
}

