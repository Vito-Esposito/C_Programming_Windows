#include <stdio.h>
#include "libreria.h"


int main() {
	int n, i;
	
	printf("Inserisci dimensione dell'array: ");
	scanf("%d", &n);
	
	float array[n];
	
	for(i=0; i<n; i++){
		printf("Array[%d]: ", i);
		scanf("%f", &array[i]);	
	}
		
		printf("\n\n");

	for(i=0; i<n; i++)
		printf("Array[%d]: %.f\n", i, array[i]);
	return 0;
}
