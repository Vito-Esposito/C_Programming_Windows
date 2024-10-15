#include <stdio.h>

/* Una classe di studenti sostiene un esame, non so quanti studenti sono quindi usare
un valore sentinella per terminare l’immissioni di dati.
Avete a disposizione le votazioni per questo esame (numeri interi compresi tra 0 e 100).
Determinate la media della classe in questo esame.
Esempio per votazioni: 50, 90, 99, 18, 100, 45, 76, 81, 90, 61
Qual è la media della classe? */

int main() {
	int voto=0, media=0, flag= -1, i=-1;
	
	printf("Inserisci il voto dell'esame di quanti studenti vuoi (inserisci -1 per terminare).\n");
	
	do{
		media += voto;
		scanf("%d", &voto);
		i++;
			
	}while(voto!=-1);	
	
	media= media/i;
	
	printf("\n\nLa media di %d studenti e': %d.", i, media);
	
	
	
	return 0;
}
