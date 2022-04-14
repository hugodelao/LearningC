// convert decimal to binary

#include <stdio.h>

long long convert(int);

int main() {
	int n1, bin = 0, n;
	int rem, i = 1, bbinario = 2, pasada = 1;
	for ( n1 = 0; n1 <= 16; n1++) {
/*		bin = convert(n1);*/
		n = n1;
		while (n != 0) {
			rem = n % 2;
			n /= 2;
			bin += rem * i;
			i *= 10;
		}
		printf("%3d en decimal =  %7lld en binario\n", n1, bin);
	bin = 0;
	i = 1;
  	}
  return 0;
}

/*long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}*/
