#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float max, min;
	
	printf("Inserisci gli n numeri: ");
	scanf("%d", &n);
	
	massimo_minimo_ninput(n, &max, &min);
	
	printf("\nIl massimo e' %.2f, il minimo e' %.2f.", max, min);

	return 0;
}
