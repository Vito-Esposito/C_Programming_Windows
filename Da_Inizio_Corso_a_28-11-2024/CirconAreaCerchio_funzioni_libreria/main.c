#include <stdio.h>
#include "libreria.h"

int main() {
	float raggio, area, circonferenza;
	
	printf("Inserisci raggio: \n");
	scanf("%f", &raggio);
	
	circonferenza= circonf(raggio);
	
	printf("\nLa circonferenza e': %.2f\n", circonferenza);
	
	area= area_cerchio(circonferenza);
	
	printf("L'area e': %.2f", area);
	
	return 0;
}

