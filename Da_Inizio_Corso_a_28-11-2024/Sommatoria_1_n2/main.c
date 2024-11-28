#include <stdio.h>
#include "libreria.h"
#include <math.h>

int main() {
	int n;
	float somma;
	
	printf("Inserisci n per la sommatoria: \n");
	scanf("%d", &n);
	
	printf("\nRisultato: %f.", sommatoria_n2(n));

	return 0;
}
