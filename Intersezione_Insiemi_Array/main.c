#include <stdio.h>
#include <stdlib.h>

void riempi_array(float[], int);
void intersezione_array(float[], float[], float[], int, int, int*);
int appartiene(float, float[], int);

int main(){
    int n_1, n_2, n_3, i;

    printf("Inserisci cardinalita' del primo e secondo insieme: \n");
    scanf("%d%d", &n_1, &n_2);

    float a[n_1], b[n_2];
    riempi_array(a, n_1);
    riempi_array(b, n_2);

    float c[100];

    intersezione_array(a, b, c, n_1, n_2, &n_3);

    printf("\n");

    for(i=0; i<n_3; i++){
        printf("Elemento array[%d] unito: %.2f, con cardinalita' %d.\n", i, c[i], n_3);
    }

}

void riempi_array(float array[], int n){
    int i;

    printf("\n");

    for(i=0; i<n; i++){
        printf("Elemento array[%d]: ",i);
        scanf("%f", &array[i]);
    }
}

void intersezione_array(float a[], float b[], float c[], int n_1, int n_2, int *n_3){
    int i=0, j;

    for(j=0; j<n_2; j++){
        if(appartiene(b[j], a, n_1) == 1 && appartiene(b[j], c, i)==0){
            c[i]= b[j];
            i++;
        }
    }

    *n_3= i;
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