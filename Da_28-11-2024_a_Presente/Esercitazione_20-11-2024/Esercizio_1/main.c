/* 
Esercizio 1.
Scrivi un programma in C che calcola la somma degli elementi di un array 2D utilizzando
due funzioni distinte:
- realizzare una function che calcola la somma attraverso la notazione standard
- realizzare una function che calcola la somma attraverso la notazione a puntatore.
- confrontare i due risultati. 
*/

#include <stdio.h>
#include <stdlib.h>

int somma_standard(int[][4], int, int);
int somma_puntatori(int*, int, int);

int main(){
    int matrice[3][4]={
        {5, 7, 11,10},
        {7, 8, 13, 20},
        {1, 2, 9, 12}
    };

    int righe= 3, colonne= 4;
    int somma_1= somma_standard(matrice, righe, colonne);
    int somma_2= somma_puntatori(&matrice[0][0], righe, colonne);

    printf("\nSomma col metodo std: %d", somma_1);
    printf("\nSomma col metodo a puntatori: %d", somma_2);
  
    if(somma_1 == somma_2)
        printf("\nFunzioni corrette.");
    else
        printf("\nFunzioni sbagliate.");

    return 0;
}

int somma_standard(int matrice[][4], int n, int m){
    int i, j, somma= 0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            somma += matrice[i][j];
        }
    }

    return somma;
}

int somma_puntatori(int *matrice, int n, int m){
    int i, j, somma= 0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            somma += *(matrice + m*i + j);
        }
    }

    return somma;
}