#include <stdio.h>
#include <stdlib.h>

void riempi_array(float[], int);
void sottrazione(float[], float[], float[], int, int, int*);
int appartiene(float, float[], int);

int main(){
    int n_a, n_b, n_c, i;

    printf("Inserisci n di A ed n di B: \n");
    scanf("%d%d", &n_a, &n_b);

    float A[n_a], B[n_b], C[100];
    riempi_array(A, n_a);
    riempi_array(B, n_b);

    sottrazione(A, B, C, n_a, n_b, &n_c);

    printf("\n");

    for(i=0; i<n_c; i++){
        printf("Elemento array[%d] risultato dopo la sottrazione: %.2f, con cardinalita' %d.\n", i, C[i], n_c);
    }
}

int appartiene(float chiave, float a[], int n){
    int i=0;
    int trovato= 0;

    do{
        if(chiave == a[i]){
            trovato = 1;
            break;
        }

        i++;
    }while(trovato==0 && i<n);

    return trovato;
}

void sottrazione(float A[], float B[], float C[], int n_a, int n_b, int *n_c){
    int i=0, j=0;

    do{
        if(appartiene(A[i], B, n_b) == 0 && appartiene(A[i], C, j) == 0){
            C[j]= A[i];
            j++;
        }
        i++;
    }while(i<n_a);

    *n_c= j;
}

void riempi_array(float array[], int n){
    int i;

    printf("\n");

    for(i=0; i<n; i++){
        printf("Elemento array[%d]: ",i);
        scanf("%f", &array[i]);
    }
}