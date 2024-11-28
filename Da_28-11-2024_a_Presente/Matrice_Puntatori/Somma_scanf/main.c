#include <stdio.h>
#include <stdlib.h>

int somma_matrice_puntatori(int*, int, int);
void riempi_matrice(int[][100], int, int);
void visualizza_matrice(int[][100], int, int);

int main(){
    int n, m;

    printf("Inserisci righe e colonne della matrice (minori di 100): ");
    scanf("%d%d", &n, &m);

    int matrice[100][100];
    riempi_matrice(matrice, n, m);

    int result= somma_matrice_puntatori(&matrice[0][0], n, m);

    visualizza_matrice(matrice, n, m);

    printf("\nLa somma degli elementi della matrice e' %d.", result);

    return 0;
}

void riempi_matrice(int matrice[][100], int n, int m){
    int i, j;

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            printf("Inserire elemento matrice[%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void visualizza_matrice(int matrice[][100], int n, int m){
    int i, j;

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            printf("Elemento matrice[%d][%d]: %d\n", i, j, matrice[i][j]);
        }
    }
}

int somma_matrice_puntatori(int *matrice, int n, int m){
    int i, j, somma=0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            somma = somma + *(matrice+m*i+j);
        }
    }

    return somma;
}
