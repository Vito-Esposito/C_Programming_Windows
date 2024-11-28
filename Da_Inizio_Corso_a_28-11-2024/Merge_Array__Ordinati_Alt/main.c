#include <stdio.h>
#include <stdlib.h>

void merge_while(float[], float[], float[], int, int, int);

int main()
{
    int i, n1, n2, n3;

    printf("Inserisci size array1 e array2: ");
    scanf("%d%d", &n1, &n2);

    float array1[n1];
    float array2[n2];

    n3= n1+n2;
    float array3[n3];

    for(i=0; i<n1; i++){
        printf("Elemento array1[%d]:", i);
        scanf("%f", &array1[i]);
    }

    for(i=0; i<n2; i++){
        printf("Elemento array2[%d]:", i);
        scanf("%f", &array2[i]);
    }

    // Merge col While

    printf("\n");

    merge_while(array1, array2, array3, n1, n2, n3);

    for(i=0; i<n3; i++)
        printf("Elemento c[%d]: %.2f\n", i, array3[i]);

    return 0;
}

void merge_while(float a[], float b[], float c[], int n1, int n2, int n3){
    int i_a=0, i_b=0, i_c=0;

    while(i_a < n1 && i_b < n2){
        if(a[i_a] < b[i_b]){
            c[i_c]= a[i_a];
            i_a++;
        }
        else{
            c[i_c]= b[i_b];
            i_b++;
        }

        i_c++;
    }

    while(i_a < n1){
        c[i_c]= a[i_a];
        i_a++;
        i_c++;
    }

    while(i_b < n2){
        c[i_c]= b[i_b];
        i_b++;
        i_c++;
    }
}




















