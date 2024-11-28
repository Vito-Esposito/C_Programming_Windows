#include <stdio.h>

int main() {
	
	int n1, n2, somma, prodotto, differenza, divisione, modulo;
	
	printf("Digitare 2 numeri: \n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	somma= n1+n2;
	prodotto= n1*n2;
	differenza= n1-n2;
	divisione= n1/n2;
	modulo= n1%n2;
	
	printf("\nLa somma e': %d, il prodotto e': %d, la differenza e': %d, la divisione e': %d e il modulo e': %d.", somma, prodotto, differenza,
	divisione, modulo);
	
	return 0;
}
