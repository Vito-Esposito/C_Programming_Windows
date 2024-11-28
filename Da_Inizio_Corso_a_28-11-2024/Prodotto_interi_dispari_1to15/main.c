#include <stdio.h>

/* Scrivere un programma che calcoli e visualizzi il prodotto degli interi dispari da 1 a 15 */

int main() {
	int i, prodotto=1;
	
	for(i=1; i<=15; i+=2)
		prodotto *= i;
		
	printf("Il prodotto degli interi dispari da 1 a 15 e': %d.", prodotto);
	
	return 0;
}
