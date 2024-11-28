#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	
	printf("Inserisci n per base e per altezza del triangolo: \n");
	scanf("%d", &n);
	printf("\n");
	
	stampa_triangolo(n);
	
	return 0;
}
