/** Impresión de los números 1 al 4 en un mismo renglon **/
#include <stdio.h>

main () {
int n1, n2, n3, n4;
n1=1;
n2=2;
n3=3;
n4=4;
printf("\nEste programa escribirá los números del 1 al 4 en un mismo renglón.");
printf("\n La primera opción, es sin usar especificadores de conversión: ", n1, n2, n3, n4);
printf("\n El segundo es usando especificadores de conversión: %d %d %d %d", n1, n2, n3, n4);
printf("\n El último método es usando 4 printf: ");
printf("%d", n1);
printf("%d", n2);
printf("%d", n3);
printf("%d\n", n4);
return 0;
}
