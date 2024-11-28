#include <stdio.h>

/* Scrivere un programma che legga un intero e determini e visualizza se sia pari o dispari. 
(Usare l’operatore modulo. Un numero pari ha modulo di 2 uguale a 0, un numero dispari ha modulo di 2 uguale a 1) */

int main() {
	int x;
	
	printf("Inserisci intero: \n");
	scanf("%d", &x);
	
	if(x%2 == 0)
		printf("\n%d e' un numero pari.", x);
	else if(x%2 == 1)
			printf("\n%d e' un numero dispari.", x);
		
		
	return 0;
}
