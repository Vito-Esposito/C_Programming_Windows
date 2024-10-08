#include <stdio.h>

int main() {
	 int i=3, j=5;
	 int *p=&i;  /* puntatore p punterà alla variabile i, contenendo così il suo indirizzo. */
	 int *q=&j;
	 
	 printf("%d\n", 7*(*p)/(*q)+7);  /* dereferenzando p con *p, accedo al valore della variabile a cui punta, cioè i, e cioè 3. */
	
	return 0;
}
