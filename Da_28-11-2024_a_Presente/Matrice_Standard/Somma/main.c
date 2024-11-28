#include <stdio.h>
#include <stdlib.h>

int somma_matrice_standard(int[][4], int, int);

int main(){
    int matrice[3][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };

    int result;
    result= somma_matrice_standard(matrice, 3, 4);

    printf("\nLa somma degli elementi della matrice e' %d.", result);

    return 0;
}

int somma_matrice_standard(int matrice[][4], int n, int m){
    int i, j, somma=0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            somma += matrice[i][j];
        }
    }

    return somma;
}
