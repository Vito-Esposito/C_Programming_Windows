#include <stdio.h>

int main() {
	int n, i, x;
	
	printf("Inserire n: \n");
	scanf("%d", &n);
	
	printf("\nI primi n numeri dispari: \n");
	
	for(i=1; i<=n; i++){
		x= (i*2)+1;
		printf("%d ", x);
	}
	
	return 0;
}
