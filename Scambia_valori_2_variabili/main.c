#include <stdio.h>
#include "libreria.h"

int main() {
	int alfa= 53, beta= -44;
	
	printf("Alfa=%d e Beta=%d.\n", alfa, beta);
	scambiare(&alfa, &beta);
	printf("Alfa=%d e Beta=%d.", alfa, beta);
	
	return 0;
}
