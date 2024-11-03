#include <stdio.h>
#include "libreria.h"

/* 1)Inserire da tastiera 10 diversi valori, in un array di 10 interi.
   2) sommare 2 a ogni intero dell’array dell’esercizio precedente . */

int main() {
	float array[10];
	int i;
	
	riempi_array(array, 10);
	
	for(i=0; i<10; i++){
		array[i]= array[i]+2;
	}
	
	leggi_array(array, 10);

	return 0;
}