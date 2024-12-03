#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char *nomi[4]={"Luca","Ciro","Marco","Lucia"};

    printf("Stampa stringhe dell'array:\n");

    for(i=0; i<4; i++)
        printf("Stringa numero %d: %s\n", i, nomi[i]);

    return 0;
}