#include <stdio.h>
#include "libreria.h"

int main() {
	int n, esito=0;
	char c;
	
	printf("Inserisci il carattere chiave e gli n elementi: \n");
	scanf("%c%d", &c, &n);
	
	printf("\nLa lettera '%c' appartiene all'insieme di %d elementi?\n", c, n);
	
	esito= char_appartenenza_noarray(n, c);
	
	if(esito == 1)
		printf("\nAppartiene.");
	else
		printf("\nNon appartiene.");
		
	return 0;
}
