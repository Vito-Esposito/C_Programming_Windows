#include <stdio.h>
#include "libreria.h"

/* Scrivere un programma che trovi la media dei voti inseriti. Fare in modo che il
primo valore inserito specifichi il numero di quelli ancora da leggere.
Non usare flag. */

int main() {
	int n;
	float media;
	
	printf("Quanti voti vuoi inserire per conoscerne la media?\n");
	scanf("%d", &n);
	
	media= media_n_numeri_inseriti(n);
	printf("\nLa media e': %.1f.", media);
	
	return 0;
}
