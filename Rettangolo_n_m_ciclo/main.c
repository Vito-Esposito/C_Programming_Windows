#include <stdio.h>

int main() {
	int n, m, i, j;
	
	printf("Inserisci n per righe e m per colonne: \n");
	scanf("%d %d", &n, &m);
	printf("\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
		printf("*");
		
		printf("\n");
	}
	
	return 0;
}
