#include <stdio.h>
#include <stdlib.h>

/* realizzare un main C che legge da tastiera un array 2D di tipo double (insieme con il numero effettivo di righe e di colonne) e 
calcola, visualizzando su schermo: la media di ogni colonna */

void riempi_array2D(double[][100], int, int);
void media_colonne(double[][100], double[], int, int);


int main(){
    int n, m, i;

    printf("Inserisci n ed m di un array 2D: ");
    scanf("%d%d", &n, &m);

    double array[n][m];
    double array1D[m];

    riempi_array2D(array, n, m);
    media_colonne(array, array1D, n, m);

    for(i=0; i<m; i++)
        printf("Elemento array1 delle medie delle colonne: %.2lf\n", array1D[i]);



}

void riempi_array2D(double a[][100], int n, int m){
    int i, j;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Elemento array[%d][%d]: ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
}

void media_colonne(double a[][100], double array[], int n, int m){
    int i, j;
    double somma= 0;

    for(j=0; j<m; j++){
        somma= 0;
        for(i=0; i<n; i++){
            somma += a[i][j];
        }
        array[j]= somma/(float)n;
    }
}