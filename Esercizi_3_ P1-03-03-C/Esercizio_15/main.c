#include <stdio.h>

int main() {
	float x, y;
	
	printf("Inserire numero float/int x: ");
	scanf("%f", &x);
	
	y= (((x*x)+3*x)/(0.5+x))+((0.1*x+1)/((x*x*x)+x))*5;
	
	printf("\nRisultato della formula (((x*x)+3x)/(0.5+x))+((0.1x+1)/(x*x*x+x))*5: %f.", y);
	
	return 0;
}
