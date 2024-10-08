#include <stdio.h>

/* Inserire il voto in input:
- se è maggiore di 90 stampare A
- se è maggiore di 80 stampare B
- se è maggiore di 70 stampare C
- se è maggiore di 60 stampare D
- altrimenti stampare F */

int main() {
	int voto;
	
	printf("Inserisci voto: \n");
	scanf("%d", &voto);
	
	if(voto > 90)
		printf("\nA");
	else if(voto > 80)
		printf("\nB");
	else if(voto > 70)
		printf("\nC");
	else if(voto > 60)
		printf("\nC");
	else
		printf("\nF");
	
	
	return 0;
}
