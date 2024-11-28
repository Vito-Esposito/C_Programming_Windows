/*
Esercizio 2
Data una matrice di caratteri 5x5, restituire il numero di consonanti per riga e per
colonna
Ad esempio.
input char a[5][5] = { {'f', 'i', 'o', 'r', 'i'}, {'v', 'e', 'n', 't', 'o'}, {'p', 'i', 'a', 'n', 'o'}, {'r', 'i', 'c', 'c', 'i'},
{'m', 'o', 'n', 'd', 'o'}};
output cons_righe[5]= {2, 3, 2, 3, 3 }
cons_colonne[5] = {5, 0, 3, 5, 0 }
*/

#include <stdio.h>
#include <stdlib.h>

void trova_cons_righe(char*, int[], int, int);
void trova_cons_colonne(char*, int[], int, int);

int main(){
    char a[5][5] = { 
        {'f', 'i', 'o', 'r', 'i'}, 
        {'v', 'e', 'n', 't', 'o'}, 
        {'p', 'i', 'a', 'n', 'o'}, 
        {'r', 'i', 'c', 'c', 'i'},
        {'m', 'o', 'n', 'd', 'o'}
        };

        int righe= 5, colonne= 5;

        int cons_righe[5];
        int cons_colonne[5];

        for(int i=0; i<5; i++){
            cons_righe[i]=0;
        }

        trova_cons_righe(&a[0][0], cons_righe, righe, colonne);

        printf("\nLe consonanti per ogni riga sono: \n");
        for(int i=0; i<5; i++){
            printf("%d\n", cons_righe[i]);
        }

        for(int i=0; i<5; i++){
            cons_colonne[i]=0;
        }

        trova_cons_colonne(&a[0][0], cons_colonne, righe, colonne);

        printf("\nLe consonanti per ogni colonna sono: \n");
        for(int i=0; i<5; i++){
            printf("%d\n", cons_colonne[i]);
        }

    return 0;
}

void trova_cons_righe(char *matrice, int cnt[], int righe, int colonne){
    int i, j;

    for(i=0; i<righe; i++){
        for(j=0; j<colonne; j++){
            if(*(matrice+colonne*i+j) != 'a' && *(matrice+colonne*i+j) != 'e' && *(matrice+colonne*i+j) != 'i' 
            && *(matrice+colonne*i+j) != 'o' && *(matrice+colonne*i+j) != 'u'){
                cnt[i] += 1;
                }
        }
    }
}

void trova_cons_colonne(char *matrice, int cnt[], int righe, int colonne){
    int i, j;

    for(j=0; j<colonne; j++){
        for(i=0; i<righe; i++){
            if(*(matrice+colonne*i+j) != 'a' && *(matrice+colonne*i+j) != 'e' && *(matrice+colonne*i+j) != 'i' 
            && *(matrice+colonne*i+j) != 'o' && *(matrice+colonne*i+j) != 'u'){
                cnt[j] += 1;
                }
        }
    }
}