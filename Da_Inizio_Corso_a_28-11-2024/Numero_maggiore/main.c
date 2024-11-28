#include <stdio.h>
#include "libreria.h"
/* Scrivere un programma in C che richieda in input una serie di valori finchè non
viene inserito dall’utente il valore -1.
Utilizzare uno dei costrutti di ripetizione studiati.
Alla fine del ciclo stampare il maggiore tra i numero inseriti. */

int main() {
	float max;
	
	printf("Inserisci una serie di numeri per determinarne il maggiore (-1 come flag):\n");
	
	max= trova_massimo();
	
	printf("\n\nMassimo trovato: %.1f.", max);
	
	return 0;
}
