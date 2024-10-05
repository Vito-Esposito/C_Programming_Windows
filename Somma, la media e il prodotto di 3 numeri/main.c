#include <stdio.h>

int main() {
	
	float somma, prodotto, n1, n2, n3, media;
	
	printf("Inserire 3 numeri: \n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	somma= n1+n2+n3;
	media= somma/3;
	prodotto= n1*n2*n3;
	
	printf("\nLa somma dei tre numeri e': %.1f, la media: %.2f e il prodotto: %.0f.", somma, media, prodotto);
	
	return 0;
}
