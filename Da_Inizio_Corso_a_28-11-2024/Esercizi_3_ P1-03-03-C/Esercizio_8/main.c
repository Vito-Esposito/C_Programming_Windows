#include <stdio.h>

	/* Dichiarare ed inizializzare la seguente variabile x = 12356332.34123222, 
	visualizzarla usando un’appropriata stringa di riferimento in printf. Usare il 
	carattere di conversione f, per la visualizzazione come parte intera e parte 
	frazionaria e il carattere di conversione e per la visualizzazione in notazione 
	scientifica. */

int main() {
	
	double x;
	x= 12356332.34123222;
	
	printf("%.8f\n", x);
	printf("%e\n", x);
		
	return 0;
}
