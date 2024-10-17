#include <stdio.h>

int main() {
	int i, j, z;
	
	for(i=1; i<=10; i++){
		for(j=1; j<=i; j++)
		printf("*");
		
		printf("\n");
	}
	
	printf("\n");
	
	for(i=10; i>=1; i--){
		for(j=1; j<=i; j++)
		printf("*");
		
		printf("\n");
	}
	
	printf("\n");
	
	for(i=10; i>=1; i--){
		for(z=1; z<=10-i; z++)
			printf(" ");
			
		for(j=1; j<=i; j++)
			printf("*");
		
			printf("\n");
	}
	
	printf("\n");
	
	for(i=1; i<=10; i++){
		for(z=10; z>i; z--)
			printf(" ");
			
		for(j=1; j<=i; j++)
			printf("*");
		
			printf("\n");
	}
	
	return 0;
}
