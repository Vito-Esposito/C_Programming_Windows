#include <stdio.h>
#include <stdalign.h>

void riempi_array(float[], int);
int inclusione_insiemi(float[], float[], int, int);
int appartiene(float, float[], int);

int main(){
    int n_a, n_b;

    printf("Inserisci n di A ed n di B: \n");
    scanf("%d%d", &n_a, &n_b);

    float A[n_a], B[n_b];
    riempi_array(A, n_a);
    riempi_array(B, n_b);


    printf("A incluso in B? Risposta: %d.", inclusione_insiemi(A, B, n_a, n_b));
}

int inclusione_insiemi(float a[], float b[], int n_a, int n_b){
    int incluso = 1, i=0;

    do{
        if(appartiene(a[i], b, n_b)==1)
            incluso=1;
        else
            incluso=0;

        i++;
    }while(incluso == 1 && i<n_a);

    return incluso;
}

int appartiene(float chiave, float a[], int n){
    int i=0;
    int trovato= 0;

    do{
        if(chiave == a[i]){
            trovato=1;
            break;
        }
        i++;
    }while(trovato == 0 && i<n);

    return trovato;
}

void riempi_array(float array[], int n){
    int i;

    printf("\n");

    for(i=0; i<n; i++){
        printf("Elemento array[%d]: ",i);
        scanf("%f", &array[i]);
    }
}