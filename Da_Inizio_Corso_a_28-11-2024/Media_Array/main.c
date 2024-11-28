#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float media;
	
	printf("Dimensione array: ");
	scanf("%d", &n);
	
	float array[n];
	riempi_array(array, n);
	somma_array(array, n);
	
	media= media_array(somma_array(array, n), n);
	
	printf("\nMedia array: %.2f.", media);
	
	
	
	return 0;
}
