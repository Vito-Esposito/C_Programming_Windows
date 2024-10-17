#include <stdio.h>


int main() {
	int n, i, x;
	
	printf("Inserire n: \n");
	scanf("%d", &n);
	
	printf("\nI primi n numeri pari: \n");
	
	for(i=1; i<=n; i++){
		x= i*2;
		printf("%d ", x);
	}
	
	return 0;
}
