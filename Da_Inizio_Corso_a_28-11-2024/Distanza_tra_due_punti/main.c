#include <stdio.h>

float distanza_o(float x1, float y1, float x2, float y2);

float distanza_o(float x1, float y1, float x2, float y2){
	float d, xx, yy;
	
	xx= pow((x2-x1),2)+pow((y2-y1),2);
	d=sqrt(xx);	
	
	return d;
}

int main() {
	float x1, y1, x2, y2, distanza;
	
	printf("Insirire le cordinate dei due punti, prima quelle del primo: \n");
	scanf("%f %f",&x1, &y1);
	printf("\nOra del secondo: \n");
	scanf("%f %f", &x2, &y2);
	
	distanza= distanza_o(x1, y1, x2, y2);
	
	printf("\nLa distanza tra i due punti, e': %.2f.", distanza);
	
	return 0;
}
