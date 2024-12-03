/*
problema:
dato un testo (stringa), che contiene uno scritto in lingua italiana, determinare il numero di parole
contenute nel testo (senza segni di interpunzione) dati di input: la stringa (array testo), la sua lunghezza (variabile m)
dato di output: il numero di parole nel testo (variabile numero_parole)
costrutto ripetitivo: 1 ciclo for 
operazione ripetuta (al generico passo i):
considerare l’i–simo carattere della stringa testo,
determinare se è iniziale di una parola e incrementare opportunamente i contatori
(una parola è una sottostringa racchiusa tra due caratteri spazio)
*/

#include <stdio.h>
#include <stdlib.h>

int lunghezza_stringa(char[]);
int conta_parole(char[], int);

int main(){
    int n;
    char testo[]="Ciao questo e un testo di prova";

    n= lunghezza_stringa(testo);

    printf("La lunghezza del testo e' %d.", n);
    printf("\nNumero di parole del testo e' %d.", conta_parole(testo, n));

    return 0;
}

// Ciao questo e un testo di prova

int lunghezza_stringa(char stringa[]){
    int i=0;
    int l=0; 

    while(stringa[i] != '\0'){
        l++;
        i++;
    }

    return l;
}

int conta_parole(char testo[], int n){
    int i;
    int in_parola= 0, n_parole= 0;

    for(i=0; i<n; i++){
        if(testo[i] == ' '){
            in_parola= 0;
        }else if(in_parola == 0){
                    in_parola= 1;
                    n_parole++;
        }
    }

    return n_parole;
}