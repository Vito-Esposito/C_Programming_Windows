#include <stdio.h>

/* Esercizio 6
Inserire due voti, uno per lo scritto e uno per l’orale :
- se lo scritto è maggiore di 18 e l’orale maggiore di 18 stampare la media del
voto
- se lo scritto è minore di 18 stampare “Bocciato”
- Se lo scritto è maggiore di 18 e l’orale minore di 18 stampare “Ripetere la
prova orale”

Usare AND && o OR || all’interno delle condizioni dell’if
Cercare di usare poche righe di codice. */

int main() {
	
	int voto_scr, voto_or, media;
	
	printf("Inserire voto scritto e voto orale.\n");
	scanf("%d %d", &voto_scr, &voto_or);
	
	if(voto_scr>=18 && voto_or>=18){
		media= (voto_scr+voto_or)/2;
		printf("\nLa media e': %d.", media);
	}
	else if(voto_scr<18)
		printf("\nBocciato.");
	else if(voto_scr>=18 && voto_or<18)
		printf("\nRipetere la prova orale.");
	
	return 0;
}
