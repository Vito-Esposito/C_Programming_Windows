/*
Esercizio 0
Data una matrice 5x5, invertire il contenuto di righe e colonne.
Ad esempio.
input a[5][5]=
{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

output b[5][5]=
{{25,24,23,22,21}, {20,19,18,17,16}, {15,14,13,12,11}, {10,9,8,7,6}, {5,4,3,2,1}}
*/

#include <stdio.h>
#include <stdlib.h>

void invertire(int[][5], int[][5], int, int);
void visualizza_matrice(int[][5], int, int);

int main(){
    int a[5][5]= {
                    {1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15},
                    {16,17,18,19,20},
                    {21,22,23,24,25}
                 };

    int b[5][5];
    int righe= 5, colonne= 5;

    visualizza_matrice(a, righe, colonne);
    invertire(a, b, righe, colonne);
    visualizza_matrice(b, righe, colonne);
    
    return 0;
}

void invertire(int a[][5], int b[][5], int righe, int colonne){
    int i, j;

    for(i=0; i<righe; i++){
        for(j=0; j<colonne; j++){
            
            b[i][j]= a[righe-1-i][colonne-1-j];
        }
    }
}

void visualizza_matrice(int a[][5], int n, int m){
    int i, j;

    printf("\n");

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Matrice[%d][%d]: %d\n", i, j, a[i][j]);
        }
    }
}
