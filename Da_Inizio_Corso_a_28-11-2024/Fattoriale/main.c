#include <stdio.h>
#include "libreria.h"

int main() {
	int n;
	
	printf("Inserisci n di cui vuoi sapere il fattoriale: \n");
	scanf("%d", &n);
	
	printf("\nFattoriale di %d e': %d.", n, fattoriale(n));
	
	return 0;
}
