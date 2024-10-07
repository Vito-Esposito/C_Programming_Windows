#include <stdio.h>

int main() {
	
	const long long a= 4194937293; 
	const short b= 32765;
	
	long long x;
	
	x= a*b;
	
	printf("x risulta: %35.0lld\n", x);	
	
	return 0;
}
