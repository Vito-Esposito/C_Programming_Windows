#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, faccia_dado, somma=0;

    printf("Lancio di un dado per 10 volte: \n");

    srand(time(0));

    for(i=1; i<=10; i++){
        faccia_dado= 1+rand()%(6);
        printf("%d lancio: %d.\n", i, faccia_dado);

        somma += faccia_dado;
    }

    printf("\nLa somma di tutti i lanci e' %d.\n", somma);

    return 0;
}
