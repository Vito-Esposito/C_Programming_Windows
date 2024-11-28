#include <stdio.h>
#include <stdlib.h>

/* realizzare un main C che legge da tastiera un array 2D di tipo double (insieme con il numero effettivo di righe e di colonne) e 
calcola, visualizzando su schermo: la media di ogni riga */

void riempi_array2D(double[][100], int n, int m);
void media_di_ogni_riga(double[][100], double[], int, int);
void stampa_array1D(double[], int);

int main(){
    int n, m;

    printf("Inserisci numero di righe e colonne di un array 2D: \n");
    scanf("%d%d", &n, &m);

    double array[n][m];
    double array_righe[n];

    riempi_array2D(array, n, m);

    printf("\nMedia di ogni riga: \n");
    media_di_ogni_riga(array, array_righe, n, m);
    stampa_array1D(array_righe, n);


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

void media_di_ogni_riga(double array2D[][100], double array[], int n, int m){
    int i, j;
    double somma;

    for(i=0; i<n; i++){
        somma= 0;
        for(j=0; j<m; j++){
            somma += array2D[i][j];
        }
        array[i]= somma/(float)m;
    }
}

void stampa_array1D(double array[], int n){
    int i;

    for(i=0; i<n; i++){
        printf("Elemento array[%d]: %.2lf\n", i, array[i]);
    }
}
