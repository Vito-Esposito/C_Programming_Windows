#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sfide= 10, i, giocatore_1=0, giocatore_2=0, faccia_dado1, faccia_dado2;

    srand(time(0));

    // Il dado avrà intervallo da 5 a 15
    for(i=1; i<=sfide; i++){
        faccia_dado1= 5+rand()%(15+1-5);
        faccia_dado2= 5+rand()%(15+1-5);

        printf("\nLancio %d del giocatore 1: %d\n", i, faccia_dado1);
        printf("Lancio %d del giocatore 2: %d\n", i, faccia_dado2);

        if(faccia_dado1 > faccia_dado2)
            giocatore_1 += 1;
        else if(faccia_dado2 > faccia_dado1)
            giocatore_2 += 1;
        else if(faccia_dado1 == faccia_dado2){
            giocatore_1 += 1;
            giocatore_2 += 1;
        }
    }

    if(giocatore_1 > giocatore_2)
        printf("\nGiocatore 1 vince, %d punti.\n", giocatore_1);
    else if(giocatore_2 > giocatore_1)
        printf("\nGiocatore 2 vince, %d punti.\n", giocatore_2);
    else if(giocatore_1 == giocatore_2)
        printf("\nPareggio.\n");

    return 0;
}
