#include <stdio.h>

/* Una classe di 10 studenti sostiene un esame.
Avete a disposizione le votazioni per questo esame (numeri interi compresi tra 0 e 100).
Determinate la media della classe in questo esame.
Esempio per votazioni: 50, 90, 99, 18, 100, 45, 76, 81, 90, 61
Qual è la media della classe? */

int main() {
	int voto, i, media=0;
	
	printf("Inserisci i voti degli esami di 10 studenti: \n");
	
	for(i=0; i<10; i++){
		scanf("%d", &voto);
		media += voto;
	}
	
	media= media/10;
	
	printf("\nMedia dei 10 esami: %d.", media);
	
	return 0;
}
