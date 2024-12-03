/*
Esercizio 2
Data una matrice di caratteri 5x5, restituire il numero di consonanti per riga e per
colonna
Ad esempio.
input char *a[5] = { “fiori”, “vento”, “piano”, “ricci”, “mondo”};
output cons_righe[5]= {2, 3, 2, 3, 3 }
cons_colonne[5] = {5, 0, 3, 5, 0 }
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    char *a[5] = { "fiori", "vento", "piano", "ricci", "mondo"};    
    int cons_righe[5]={0,0,0,0,0};
    int cons_colonne[5]={0,0,0,0,0};

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(*(a[i]+j) != 'a' && *(a[i]+j) != 'e' && *(a[i]+j) != 'i' && *(a[i]+j) != 'o' && *(a[i]+j) != 'u'){
                cons_righe[i]++;
            }
        }
    }

    printf("Vocali contenute in ogni riga(stringa):\n");
    for(i=0; i<5; i++){
        printf("%d\n", cons_righe[i]);
    }

    for(j=0; j<5; j++){
        for(i=0; i<5; i++){
            if(*(a[i]+j) != 'a' && *(a[i]+j) != 'e' && *(a[i]+j) != 'i' && *(a[i]+j) != 'o' && *(a[i]+j) != 'u'){
                cons_colonne[j]++;
            }
        }
    }

    printf("Vocali contenute in ogni colonna dell'array di stringhe:\n");
    for(i=0; i<5; i++){
        printf("%d\n", cons_colonne[i]);
    }

    return 0;
}