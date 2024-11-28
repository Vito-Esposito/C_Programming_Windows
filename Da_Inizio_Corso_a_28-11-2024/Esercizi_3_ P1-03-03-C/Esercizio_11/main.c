#include <stdio.h>

int main() {
	
	const unsigned char a= 255u;
	const short b= 512;
	const unsigned long c= 10000000ul;
	signed short x; //corretto unsigned -> signed, e mancava il punto e virgola finale
	unsigned long y; //correto short -> long
	
	x= a-b;
	y=(b-a)*c;
	
	printf("x risulta: %hd\n", x); //corretto %u -> %hd (short int)
	printf("y risulta: %u\n", y);
	
	return 0;
}
