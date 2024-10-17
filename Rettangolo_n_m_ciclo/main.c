#include <stdio.h>
#include "libreria.h"

int main() {
	int n, m;
	
	printf("Inserisci n per righe e m per colonne: \n");
	scanf("%d %d", &n, &m);
	printf("\n");
	
	stampa_rettangolo(n, m);
	
	return 0;
}
