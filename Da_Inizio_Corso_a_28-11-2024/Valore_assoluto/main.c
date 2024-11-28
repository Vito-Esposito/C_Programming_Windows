#include <stdio.h>
#include "libreria.h"

int main() {
	float numero, valore_ass;
	
	printf("Inserisci numero di cui vuoi il valore assoluto: \n");
	scanf("%f", &numero);
	
	valore_ass= valore_assoluto(numero);
	
	printf("\nIl valore assoluto del numero %.1f e': %.1f.", numero, valore_ass);
	
	return 0;
}
