#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float varianza;
	
	printf("Inserisci dimensione array: ");
	scanf("%d", &n);
	
	float array[n];
	
	riempi_array(array, n);
	varianza= varianza_array(array, media_array(somma_array(array, n), n), n);
	
	printf("\nVarianza dell'array: %f", varianza);
	
	return 0;
}
