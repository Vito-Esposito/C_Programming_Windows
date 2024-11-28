#include <stdio.h>


int main() {
	const float a = 8.32453f; //sostituisco suffisso u con f, u funziona solo con gli unsigned int
	int c;
	float b; //b deve essere un float, non un int
	
	scanf("%d",&c);
	
	b = a/c;
	printf ("divisione= %.5f \n", b);

	return 0;
}
