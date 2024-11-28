#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float massimo;
	
	printf("Inserisci gli n numeri di cui vuoi trovare massimo: \n");
	scanf("%d", &n);
	
	massimo= trova_massimo_ninput(n);
	
	printf("\nMassimo: %.2f.", massimo);

	return 0;
}
