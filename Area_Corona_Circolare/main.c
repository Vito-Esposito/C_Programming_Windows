#include <stdio.h>
#include "libreria.h"

int main() {
	float r_min, r_mag, a_cor_circ;
	
	printf("Inserisci raggio minore e raggio maggiore: \n");
	scanf("%f %f", &r_min, &r_mag);
	
	a_cor_circ= area_mag(r_mag)-area_min(r_min);
	
	printf("\nL'area della corona circolare e': %.2f", a_cor_circ);
	return 0;
}
