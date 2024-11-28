#include <stdio.h>

/* Scrivere un programma che chieda all’utente di immettere due interi, ottenga i numeri e visualizza quello maggiore seguito da “maggiore”.
Nel caso che i numeri siano uguali, stampare il messaggio “uguali”
Usare la forma a selezione singola dell’istruzione if. */

int main() {
	int x, y;
	
	printf("Inserire due interi: \n");
	scanf("%d %d", &x, &y);
	
	if(x > y)
		printf("\n%d e' maggiore di %d.", x, y);
	else if(x == y)
		printf("\n%d e %d sono uguali.", x, y);
		else printf("\n%d e' minore di %d.", x, y);
	
	return 0;
}
