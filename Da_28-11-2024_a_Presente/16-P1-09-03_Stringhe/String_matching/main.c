/*
problema: (string matching)
calcolo del numero di volte in cui una stringa data
(chiave) compare come sottostringa in un’altra stringa
data (testo)
dati di input: la stringa chiave (array) chiave, la sua
lunghezza (variabile n), la stringa testo
(array testo), la sua lunghezza (variabile m)
dato di output: numero di occorrenze
(variabile conta_chiave)
costrutto ripetitivo: 1+1 cicli innestati
operazione ripetuta (al generico passo i, ciclo
for esterno): confrontare la stringa chiave e la
sottostringa (inizio i e lunghezza n) della
stringa testo
*/

#include <stdio.h>
#include <stdlib.h>

int numero_corrispondenze(char[], char[], int, int);
int lunghezza_string(char[]);
int string_uguali(char[], char[], int);

int main(){
    char chiave[30], testo[30];

    printf("Inserisci chiave:\n");
    scanf("%s", chiave);
    printf("Inserisci testo:\n");
    scanf("%s", testo);

    int n= lunghezza_string(testo);
    int m= lunghezza_string(chiave);

    printf("\nLunghezza chiave: %d", m);
    printf("\nLunghezza testo: %d", n);

    printf("\n\nNumero occorrenze della chiave nel testo: %d\n", numero_corrispondenze(chiave, testo, m, n));

    return 0;
}

int lunghezza_string(char string[]){
    int i=0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

int string_uguali(char string_1[], char string_2[], int n){
    int i, uguale= 1;

    for(i=0; i<n; i++){
        if(string_1[i] != string_2[i]){
            uguale = 0;
            return uguale;
        }
    }

    return uguale;
}
 
int numero_corrispondenze(char chiave[], char testo[], int m, int n){
    int num_occ= 0, i;

    for(i=0; i<=n-m; i++){
            if(string_uguali(chiave, testo+i, m) == 1){
                num_occ++;
            }
        }
        
        return num_occ;
}
