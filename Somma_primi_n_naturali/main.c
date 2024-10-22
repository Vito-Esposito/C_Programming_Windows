#include <stdio.h>
#include "libreria.h"

int main() {
	int n, i, somma;
	
	printf("Inserisci n di cui vuoi la somma dei primi n naturali: \n");
	scanf("%d", &n);

	somma= somma_primi_n_naturali(n);
	
	printf("\nRisultato: %d.", somma);
	
	return 0;
}
