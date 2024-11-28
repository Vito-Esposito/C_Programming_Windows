#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float minimo;
	
	printf("Quanti  n numeri vuoi inserire?: \n");
	scanf("%d", &n);
	
	minimo= trova_minimo_ninput(n);
	
	printf("\nIl minimo e': %.2f.", minimo);
	
	return 0;
}
