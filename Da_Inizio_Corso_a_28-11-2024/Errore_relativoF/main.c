#include <stdio.h>
#include "libreria.h"

int main() {
	float x, y, errore_relativo;
	
	printf("Inserisci x e y: \n");
	scanf("%f %f", &x, &y);
	
	errore_relativo= errore_relativoF(x, y);
	
	printf("\nL'errore relativo e': %f.", errore_relativo);
	
	return 0;
}


