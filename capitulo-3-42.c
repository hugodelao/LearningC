/* Este programa, te pedirá el radio (incluso con decimales) y te entregará el diámetro, la circunferencia y el área */
#include <stdio.h>
int main()
{
	float radio = 0, diametro, perimetro, area, pi;
	int bandera = 0;
	pi = 3.14159;
	printf("\nEste programa te pedirá el radio de un círculo y a continuación carculará e imprimirá el diámetro, el perímetro y el área.");
	while ( bandera != -1 ){
		printf("\nEscribe el número que representa el radio del círculo (-1 para terminar): ");
		scanf("%f", &radio);
		bandera = radio;
		if (bandera != -1){
			diametro = radio * 2;
			perimetro = pi * diametro;
			area = radio * radio * pi;
			printf("\nEl radio es: %.4f", radio);
			printf("\nEl diámetro es: %.4f", diametro);
			printf("\nEl perímetro es: %.4f", perimetro);
			printf("\nEl área es: %.4f", area);}			
	}
	printf("\nEl valor de radio es %.4f", radio);
	printf("\nEl valor de pi es %.5f\n", pi);
	return 0;
}
