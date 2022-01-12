/** Programa que lee dos números y calcula suma, producto, diferencia, cociente y módulo **/
#include <stdio.h>

main()
{
int num1, num2;
printf("Este programa calcula la suma, producto, diferencia, cociente y módulo de dos números\n");
printf("Por lo tanto, te pido que captures dos números enteros (sin decimales).\n");
printf("Escribe el primer número a continuación: "); 
scanf("%d", &num1);
printf("\n El primer número es: %d", num1);
printf("\n Escribe ahora el segundo número: ");
scanf("%d", &num2);
printf("\n El segundo número es: %d ", num2);
printf("\n A continuación te presento los resultados:");
printf("\n La suma es: %d", num1+num2);
printf("\n La diferencia es: %d", num1-num2);
printf("\n El cociente es: %d", num1/num2);
printf("\n El producto es: %d", num1*num2);
printf("\n El módulo es: %d", num1%num2);
printf("\n Saludos.\n");
return 0;
}
