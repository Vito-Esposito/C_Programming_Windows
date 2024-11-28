#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float somma;
	
	printf("Inserisci n: ");
	scanf("%d", &n);
	
	somma= sommatoria_3(n);
	
	printf("\nSomma della sommatoria: %.2f", somma);
	
	
	return 0;
}
