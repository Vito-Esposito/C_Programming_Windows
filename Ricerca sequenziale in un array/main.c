#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, chiave, trovato=0;

    printf("Inserisci size array e riempilo: ");
    scanf("%d", &n);

    int array[n];

    for(i=0; i<n; i++){
        printf("Elemento a[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Inserisci chiave da cercare: ");
    scanf("%d", &chiave);

    i=0;

    do{
            if(chiave == array[i])
            {
                trovato=1;
                printf("\nTrovato!\n");
            }
            else

            i++;

    }while(trovato == 0 && i<n);

    if(trovato == 0)
        printf("\nNon trovato.\n");

    return 0;
}
