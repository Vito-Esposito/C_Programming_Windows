#include <stdio.h>
#include "libreria.h"

/* Una classe di studenti sostiene un esame, non so quanti studenti sono quindi usare
un valore sentinella per terminare l’immissioni di dati.
Avete a disposizione le votazioni per questo esame (numeri interi compresi tra 0 e 100).
Determinate la media della classe in questo esame.
Esempio per votazioni: 50, 90, 99, 18, 100, 45, 76, 81, 90, 61
Qual è la media della classe? */

int main() {
	int media;
	
	printf("Inserisci il voto dell'esame di quanti studenti vuoi (inserisci -1 per terminare).\n");
	
	media= media_flag();
	
	printf("\n\nLa media e': %d.", media);
	
	return 0;
}
