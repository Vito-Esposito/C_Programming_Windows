#include <stdio.h>
#include "libreria.h"

int main() {
	float raggio, circonferenza;
	
	printf("Inserisci raggio: \n");
	scanf("%f", &raggio);
	
	circonf_rif(raggio, &circonferenza);
	
	printf("\nLa circonferenza e': %.2f.", circonferenza);
	
	return 0;
}
