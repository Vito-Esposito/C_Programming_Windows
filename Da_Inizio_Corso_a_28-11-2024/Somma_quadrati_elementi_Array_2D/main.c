#include <stdio.h>
#include <stdlib.h>

/* problema: la somma dei quadrati degli elementi */

void riempi_array2D(double[][100], int n, int m);
double somma_quadrati_elementi_array2D(double[][100], int, int);


int main(){
    int n, m;
    double somma;

    printf("Inserisci numero di righe e colonne di un array 2D: \n");
    scanf("%d%d", &n, &m);

    double array[n][m];

    riempi_array2D(array, n, m);
    somma= somma_quadrati_elementi_array2D(array, n, m);

    printf("\nLa somma dei quadrati degli elementi e' %.2lf.", somma);
}

void riempi_array2D(double array[][100], int n, int m){
    int i, j;

    printf("\n");

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Elemento array[%d][%d]= ", i, j);
            scanf("%lf", &array[i][j]);
        }
    }
}

double somma_quadrati_elementi_array2D(double a[][100], int n, int m){
    int i, j;
    double somma= 0;
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            somma += (a[i][j]*a[i][j]);
        }
    }

    return somma;
}
