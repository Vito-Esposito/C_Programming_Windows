#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	float x, somma;
	
	printf("Inserisci n e x della sommatoria geometrica: \n");
	scanf("%d%f", &n, &x);
	
	somma= sommatoria_geometrica(n, x);
	printf("\nLa somma e': %.2f.", somma);
	
	return 0;
}
