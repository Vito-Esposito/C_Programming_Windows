#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float somma;
	
	printf("Dimensione array: ");
	scanf("%d", &n);
	
	float array[n];
	
	riempi_array(array, n);
	leggi_array(array, n);
	somma= somma_array(array, n);
	
	printf("\nSomma dell'array: %.2f.", somma);
	
	
	
	
	
	return 0;
}
