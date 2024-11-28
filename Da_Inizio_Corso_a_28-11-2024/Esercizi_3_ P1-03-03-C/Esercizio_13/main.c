#include <stdio.h>

int main() {
	
	float d; //a lo faccio diventare int e d float, che è più utile
	int a, c, b;
   
	a= 3;
	
	scanf("%d", &b); 
	scanf("%d", &c);
	
	d= ((float)a/c)*b; //forzo a in float, così che posso svolgere l'operazione di divisione
	
	printf("b= %d \n", b); //uso %d, non %f
	printf("c= %d \n", c); //uso %d, non %f
	printf("operazione= %f \n", d);
	
	return 0;
}
