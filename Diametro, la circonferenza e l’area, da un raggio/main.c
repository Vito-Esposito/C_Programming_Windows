#include <stdio.h>

int main() {
	
	const float pi_greco= 3.14159;
	float raggio, diametro, circon, area;
	
	printf("Inserire raggio: \n");
	scanf("%f", &raggio);
	
	diametro= raggio*2;
	circon= diametro*pi_greco;
	area= pi_greco*raggio*raggio;
	
	printf("\nDal raggio %.1f, ho trovato il diametro %.1f, la circonferenza %.1f e l'area %.1f.", raggio, diametro, circon, area);
	
	return 0;
}
