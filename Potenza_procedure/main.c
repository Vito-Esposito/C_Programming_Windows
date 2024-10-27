#include <stdio.h>
#include "libreria.h"

int main() {
	float a;
	int n;
	
	printf("Inserisci numero ed esponente: \n");
	scanf("%f%d", &a, &n);
	
	potenza_procedure(&a, n);
	
	printf("Risultato: %.2f.", a);
	
	return 0;
}
