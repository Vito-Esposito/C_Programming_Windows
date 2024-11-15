#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j=0, tentativi=3, pin_corr=0, n_pin, corretto=0;
    int pin;

    printf("Inserisci il nuovo PIN del telefono (5 cifre): \n");

    do{
    scanf("%d", &pin);

    if( pin >= 10000 && pin <= 99999){
        printf("\nCorretto inserimento.\n");
        corretto=1;
    }
    else
        printf("\nRiprova con 5 cifre.\n");
    }while(corretto==0);

    printf("\nInserisci PIN, hai 3 tentativi: \n");

    do{
        scanf("%d", &n_pin);
        if(n_pin == pin){
            printf("\nPin corretto!\n");
            pin_corr=1;
        }
        else{
            tentativi--;
            printf("\nTi rimangono %d tentativi.\n", tentativi);
        }

    }while(tentativi>0 && pin_corr==0);

    return 0;
}
