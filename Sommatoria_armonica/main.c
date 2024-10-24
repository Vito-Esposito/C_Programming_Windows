#include <stdio.h>
#include "libreria.h"


int main() {
	int n;
	float somma;
	
	printf("Inserisci N per la sommatoria armonica:\n");
	scanf("%d", &n);
	
	somma= sommatoria_armonica(n);
	
	printf("\nSomma armonica: %f.", somma);

	return 0;
}
