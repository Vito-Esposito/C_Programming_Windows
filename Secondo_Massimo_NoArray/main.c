#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float s_max, max;
	
	printf("Inserisci n numeri: ");
	scanf("%d", &n);
		
	trova_secondo_massimo_ninput(n, &max, &s_max);

	printf("\nIl massimo e' %.2f, il secondo massimo e' %.2f.", max, s_max);
	
	return 0;
}
