#include <stdio.h>
#include <stdlib.h>

void riempi_array2D(int[][100], int, int);
void max_i_array2D(int[][100], int, int, int*, int*, int*);
void min_i_array2D(int[][100], int, int, int*, int*, int*);
void media_array2D(int[][100], int, int, float*);
void max_d_array2D(int[][100], int, int*);
void max_triangolo_superiore_array(int[][100], int, int*);

int main(){
    int n, m, i, j;

    // Inizializzaione array 2D 

    printf("Inserire righe e colonne di un array 2D: \n");
    scanf("%d%d", &n, &m);

    int array[n][m];
    riempi_array2D(array, n, m);

    // problema: calcolo del massimo dei valori di un array 2D e dei suoi indici

    int *i_max= malloc(sizeof(int));
    int *j_max= malloc(sizeof(int));
    int *max= malloc(sizeof(int));

    max_i_array2D(array, n, m, i_max, j_max, max);

    printf("\nIl massimo e' %d e il suo indice e' [%d][%d].", *max, *i_max, *j_max);

    free(i_max);
    free(j_max);
    free(max);

    // problema: calcolo del minimo dei valori di un array 2D e dei suoi indici

    int *i_min= malloc(sizeof(int));
    int *j_min= malloc(sizeof(int));
    int *min= malloc(sizeof(int));

    min_i_array2D(array, n, m, i_min, j_min, min);

    printf("\nIl minimo e' %d e il suo indice e' [%d][%d].", *min, *i_min, *j_min);

    free(i_min);
    free(j_min);
    free(min);

    // problema: calcolo della media dei valori di un array 2D

    float *media= malloc(sizeof(float));

    media_array2D(array, n, m, media);

    printf("\nLa media e' %.2f.", *media);

    free(media);

   // problema: calcolo del massimo dei valori della diagonale (principale) di un array 2D

    int *max_d= malloc(sizeof(int));
    int n_q;

    printf("\nInserisci numero di righe e colonne di un array 2D (quadrato): ");
    scanf("%d", &n_q);

    riempi_array2D(array, n_q, n_q);

    max_d_array2D(array, n_q, max_d);

    printf("\nIl massimo della diagonale e' %d.", *max_d);

    free(max_d);

    // problema: calcolo del massimo dei valori del triangolo superiore di un array 2D

    int *max_t_s= malloc(sizeof(int));

    max_triangolo_superiore_array(array, n_q, max_t_s);

    printf("\nIl massimo del triangolo superiore dell'array e': %d.", *max_t_s);

    free(max_t_s);




}

void riempi_array2D(int array[][100], int n, int m){
    int i, j;

    printf("\n");

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            printf("Elemento array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void max_i_array2D(int array[][100], int n, int m, int *i_max, int *j_max, int *max){
    int i, j;

    *max= array[0][0];

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            if(array[i][j] > *max){
                *max= array[i][j];
                *i_max= i;
                *j_max= j;
            }
        }
    }
}

void min_i_array2D(int array[][100], int n, int m, int *i_min, int *j_min, int *min){
    int i, j;

    *min= array[0][0];

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            if(array[i][j] < *min){
                *min= array[i][j];
                *i_min= i;
                *j_min= j;
            }
        }
    }
}

void media_array2D(int array[][100], int n, int m, float *media){
    int i, j, somma=0;

    for(i=0; i<n; i++){
        for(j=0; j<m;j++){
            somma += array[i][j];
        }
    }

    *media= (float)somma/(float)(n*m);
}

void max_d_array2D(int array[][100], int n, int *max_d){
    int i, j;

    *max_d= array[0][0];

    for(i=0; i<n; i++){
            if(array[i][i] > *max_d)
                *max_d= array[i][i];
    }
}

void max_triangolo_superiore_array(int array[][100], int n, int *max){
    int i, j;

    *max= array[0][0];

    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(array[i][j] > *max)
                *max= array[i][j];
        }
    }
}
