/* Este programa creará la tabla de equivalencias entre los sistemas binario, octal, decimal y hexadecimal */
#include <stdio.h>

int main (){
	int decimales, binario = 0, octal = 0, hexa = 0, basebinario;
	int rem = 0, i = 1, n = 0;

	printf("%10s%10s%10s%10s\n", "Decimales", "Binario", "Octal", "Hexadecimal");
	for ( decimales = 0 ; decimales <= 16 ; decimales++){
		if ( decimales != 0 ){
			switch ( decimales ) {
				case 1:
					hexa++;
					octal++;
					break;
				case 8:
					octal = 10;
					hexa++;
					break;
				case 10:
					hexa = 'A';
					octal++;
					break;
				case 16:
					hexa = 10;
					octal = 20;
					break;	
				default:
					octal++;
					hexa++;
					break;
			}
			n = decimales;
			while (n != 0) {
				rem = n % 2;
				n /= 2;
				binario += rem * i;
				i *= 10;
			}
		}
	if ( decimales >= 10 && decimales <= 15 )
		printf("%10d%10d%10d%10c\n", decimales, binario, octal, hexa);
	else
		printf("%10d%10d%10d%10d\n", decimales, binario, octal, hexa);	
	binario = 0;
	i = 1;
	}
	return 0;
}


