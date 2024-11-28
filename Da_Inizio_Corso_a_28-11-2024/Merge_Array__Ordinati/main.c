#include <stdio.h>
#include <stdlib.h>

void merge(float[], float[], float[], int, int, int);

int main()
{
    int i, n1, n2;

    printf("Inserisci size di array 1 e array 2:\n");
    scanf("%d%d", &n1, &n2);

    float array1[n1];
    float array2[n2];

    for(i=0; i<n1; i++){
        printf("Elemento array1[%d]: ", i);
        scanf("%f", &array1[i]);
    }

    printf("\n");

    for(i=0; i<n2; i++){
        printf("Elemento array2[%d]: ", i);
        scanf("%f", &array2[i]);
    }

    /* Merge */

    int n3= n1+n2;
    float array3[n3];

    merge(array1, array2, array3, n1, n2, n3);

    printf("\n");

    for(i=0; i<n3; i++){
        printf("Elemento array3[%d]: %.2f\n", i, array3[i]);
    }

    return 0;
}

void merge(float array1[], float array2[], float array3[], int n1, int n2, int n3){
    int i1=0, i2=0, i3;

    for(i3=0; i3 < n3; i3++){
        if(i1 < n1 && i2 < n2){
            if(array1[i1] < array2[i2]){
                array3[i3]= array1[i1];
                i1++;
            }
            else{
                array3[i3]= array2[i2];
                i2++;
            }
        }
        else if(i1 >= n1){
            array3[i3]=array2[i2];
            i2++;
        }
        else{
            array3[i3]= array1[i1];
            i1++;
        }
    }
}



















