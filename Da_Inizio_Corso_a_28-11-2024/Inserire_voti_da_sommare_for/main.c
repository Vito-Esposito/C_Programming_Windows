#include <stdio.h>

/* Inserisci voti da sommare col for finchè non inserisco un flag. */

int main() {
	int voto=0, totale=0;
	
	for(;voto!=-1;){
		totale += voto;
		scanf("%d", &voto);
	}
	
	printf("\nIl totale e': %d.", totale);
	
	return 0;
}
