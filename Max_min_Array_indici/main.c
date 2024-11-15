#include <stdio.h>
#include <stdlib.h>
#include "lib.c"

/* calcolo del massimo e minimo (e dei loro indici) dei valori di un array 1D, usa funzione/procedure */

int main(){
    int n;
    int *i_max= malloc(sizeof(int));
    int*i_min= malloc(sizeof(int));
    float *max= malloc(sizeof(float));
    float *min= malloc(sizeof(float));

    printf("Inserisci dimensione dell'array: \n");
    scanf("%d", &n);

    float a[n];

    riempi_array(a, n);
    massimo(a, max, i_max, n);
    minimo(a, min, i_min, n);

    printf("\nIl massimo dell'array e' %.2f e il suo indice e' %d.\n", *max, *i_max);
    printf("\nIl minimo dell'array e' %.2f e il suo indice e' %d.\n", *min, *i_min);

    free(i_max);
    free(i_min);
    free(max);
    free(min);




    return 0;
}
