/*
problema:(matching migliore)
determinare la sottostringa di una stringa data (testo) che ha il maggior numero di caratteri (di ugual posto) 
uguali a quelli di un’altra stringa data (chiave).
Dati di input: la stringa chiave (array chiave) la sua lunghezza (variabile n), la stringa testo (array testo), 
la sua lunghezza (variabile m).
Dato di output: l’indice della sottostringa di matching migliore (variabile indice).
Costrutto ripetitivo: 1+1 cicli for innestati.
Operazione ripetuta (al generico passo i, ciclo for esterno): determinare il punteggio del matching tra la stringa chiave 
e la sottostringa (inizio i e lunghezza n) della stringa testo.
*/

#include <stdio.h>
#include <stdlib.h>

int punteggio_lettere_match(char[], char[], int);
int matching_migliore_sottostringa(char[], char[], int, int);
int lunghezza_string(char[]);

int main(){
    char chiave[30], testo[30];

    printf("Scrivi chiave:\n");
    scanf("%s", chiave);
    printf("Inserisci testo:\n");
    scanf("%s", testo);
    
    int m= lunghezza_string(chiave);
    int n= lunghezza_string(testo);

    printf("\nAll'indice %d c'e' matching migliore.\n", matching_migliore_sottostringa(chiave, testo, m, n));

    return 0;
}

int punteggio_lettere_match(char string_1[], char string_2[], int n){
    int i, caratteri_uguali= 0;

    for(i=0; i<n; i++){
        if(string_1[i] == string_2[i]){
            caratteri_uguali++;
        }
    }
    return caratteri_uguali;
}

int matching_migliore_sottostringa(char chiave[], char testo[], int m, int n){
    int i, punt_lettere_max= 0, punt_lettere=0, indice=0;

    for(i=0; i<=n-m; i++){
        punt_lettere= punteggio_lettere_match(chiave, testo+i, n);

        if(punt_lettere > punt_lettere_max){
            punt_lettere_max= punt_lettere;
            indice= i;
        }
    }
    return indice;
}

int lunghezza_string(char string[]){
    int i=0;

    while(string[i] != '\0'){
        i++;
    }
    return i;
}