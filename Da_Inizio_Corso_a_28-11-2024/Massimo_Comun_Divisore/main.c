#include <stdio.h>
#include "libreria.h"

int main() {
	int a, b, x;
	
	printf("Inserisci a e b: ");
	scanf("%d%d", &a, &b);
	
	x= mcd(a, b);
	
	printf("\nIl MCD tra %d e %d e': %d.", a, b, x);

	return 0;
}
