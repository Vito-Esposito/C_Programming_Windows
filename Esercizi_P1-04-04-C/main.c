#include <stdio.h>

int main() {
	int x;

// Scrivere 4 differenti istruzioni in C che aggiungano 1 alla variabile intera
	x++;
	printf("%d\n", x);
	x=0;
	++x;
	printf("%d\n", x);
	x=0;
	x+=1;
	printf("%d\n", x);
	x=0;
	x= x+1;
	printf("%d\n", x);
	
/* Scrivere una singola istruzione per ognuna delle seguenti attività:
a) Assegnare la somma di x e di y a z e incrementare il valore di x di 1 dopo il
calcolo.
b) Moltiplicare la variabile product per 2 utilizzando *=
c) Moltiplicare la variabile product per 2 utilizzando = e *
d) Controllare se il valore della variabile count è maggiore di 10. Nel caso lo fosse
visualizzate “Count maggiore di 10”
e) Decrementare la variabile x di 1 e quindi sottraetela dalla variabile total
f) Aggiungere la variabile x alla variabile total e quindi decrementare x di 1
g) Calcolate il resto della divisione di q per divisor e assegnate il risultato a q.
Scrivete questa istruzione in due modi diversi.
h) Visualizzate il valore 123.4567 con 2 cifre di precisione. Quale valore sarà
visualizzato?
i) Visualizzate il valore in virgola mobile 3.14159 con tre cifre a destra del punto
decimale. Quale valore sar visualizzato? */
	
	int t=2, y=3, z=0;
	z= (t++)+y;
	printf("\nz= %d con t= 2 e y=%d, t ora: %d.", z, y, t);
	
	int product=7;
	product*=2;
	printf("\nproduct: %d.", product);
	
	product=7;
	product= product*2;
	printf("\nproduct: %d.\n", product);
	
	float count;
	scanf("%f", &count);
	if(count > 10)
		printf("Count maggiore di 10.");
	else
		printf("Count non maggiore di 10.");
		
	int total=10;
	x= 5;
	total= total-(--x);
	printf("\ntotal: %d.", total);
	
	total=10;
	x=5;
	total= total+(x--);
	printf("\ntotal: %d e x: %d.", total, x);
	
	int q=10;
	int divisor=3;
	q%=divisor;
	printf("\nq: %d.", q);
	q=10;
	divisor=3;
	q= q%divisor;
	printf("\nq: %d.", q);
	
	float num= 123.4567F;
	printf("\n2 cifre di precisione: %.2f.", num);
	
	float num_m= 3.14159F;
	printf("\nvalore in virgola mobile 3.14159 con tre cifre a destra del punto decimale: %.3f.", num_m);
	
/* Scrivete una istruzione C per eseguire ognuna delle seguenti attività.
a) dichiarare le variabili sum e x di tipo int
b) inizializzate la variabile x con 1
c) inizializzate la variabile sum con 0
d) aggiungete la variabile x a sum e assegnate il risultato a quest’ultima
e) visualizzate “la somma: ” seguito dal valore della variabile sum */

	int sum;
	x=1;
	sum=0;
	sum+=x;
	printf("\nLa somma: %d.", sum);
	
	
	return 0;
}
