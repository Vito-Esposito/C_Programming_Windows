#include <stdio.h>
#include <stdlib.h>

/* Calcoli volume di un parallelepipedo rettangolo.
   La base, altezza e profondità verranno dati in input. */

int main() {
	
	float base, altezza, prof, volume;
	
	printf("Inserire la base, l'altezza e la profondita' del parallelepipedo \ndi cui si vuole conoscere il volume:\n");
	scanf("%f%f%f", &base, &altezza, &prof);
	
	volume= base*altezza*prof;
	
	printf("\n\nIl volume e': %.1f.", volume);
	
	return 0;
}
