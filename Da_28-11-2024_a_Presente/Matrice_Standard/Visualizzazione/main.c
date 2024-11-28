#include <stdio.h>
#include <stdlib.h>

void visualizza_matrice_standard(int[][4], int, int);

int main(){
    int matrice[3][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };

    visualizza_matrice_standard(matrice, 3, 4);
}

void visualizza_matrice_standard(int matrice[][4], int n, int m){
    int i, j;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Elemento matrice[%d][%d]= %d\n", i, j, matrice[i][j]);
        }
    }
}