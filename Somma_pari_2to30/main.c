#include <stdio.h>

/* Scrivere un programma che calcoli e visualizzi la somma degli interi pari da 2 a 30 */

int main() {
	int i, somma=0; 
	
	for(i=0; i<=30; i+=2)
		somma+=i;
		
	printf("La somma dei numeri interi pari da 2 a 30 sono: %d.", somma);
	
	return 0;
}
