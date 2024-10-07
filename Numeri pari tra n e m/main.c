#include <stdio.h>

/* Dati n e m (numeri pari con n<m), visualizzare in output i numeri pari tra n e m */

int main() {
	int n,m,i;
	
	printf("Inserisci n ed m per cui si vogliono sapere i numeri pari compresi: \n");
	scanf("%d %d", &n, &m);
	
	for(i=n; i<=m; i++){
		if(i%2==0)
		printf("%d ", i);
	}
	
	return 0;
}
