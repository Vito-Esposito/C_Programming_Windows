#include <stdio.h>
#include <stdlib.h>

// Ho due array di size n, sono uguali?

void uguaglianza_array(float[], float[], int);

int main()
{
    int i, n;

    printf("Inserisci size (uguale) array1 e array2: ");
    scanf("%d", &n);

    float array1[n];
    float array2[n];

    for(i=0; i<n; i++){
        printf("Elemento array1[%d]:", i);
        scanf("%f", &array1[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        printf("Elemento array2[%d]:", i);
        scanf("%f", &array2[i]);
    }

    uguaglianza_array(array1, array2, n);

    return 0;
}

void uguaglianza_array(float a[], float b[], int n){
    int i=0, uguale=1;

    while(uguale == 1 && i<n){
        if(a[i]!=b[i]){
            uguale=0;
            break;
        }

        i++;
    }

    if(uguale == 1)
        printf("\nI due array sono uguali.\n");
    else
        printf("\nI due array sono diversi.\n");
}



















