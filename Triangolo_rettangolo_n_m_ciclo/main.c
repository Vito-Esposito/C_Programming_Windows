#include <stdio.h>

int main() {
	int n, i, j;
	
	printf("Inserisci n per base e m per altezza del triangolo: \n");
	scanf("%d", &n);
	printf("\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++)
			printf("*");
		
		printf("\n");
	}
	
	return 0;
}
