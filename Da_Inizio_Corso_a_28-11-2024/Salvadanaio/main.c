#include <stdio.h>
#include <stdlib.h>

void prelievo(float*);
void deposito(float*);
void saldo(float*);

int main()
{
    float *salvadanaio= malloc(sizeof(float));
    int op_prelievo, op_deposito, i;
    char s;

    *salvadanaio= 0.0;

    printf("Quante operazioni vuoi effettuare (deposito)?\n");
    scanf("%d", &op_deposito);

    for(i=1; i<=op_deposito; i++)
        deposito(salvadanaio);

    printf("\nQuante operazioni vuoi effettuare (prelievo)?\n");
    scanf("%d", &op_prelievo);

    for(i=1; i<=op_prelievo; i++)
        prelievo(salvadanaio);

    saldo(salvadanaio);

    free(salvadanaio);

    return 0;
}

void prelievo(float *salvadanaio){
    float soldi;

    printf("\nQuanti soldi vuoi prelevare?\n");
    scanf("%f", &soldi);
    *salvadanaio -= soldi;
}

void deposito(float *salvadanaio){
    float soldi;

    printf("\nQuanti soldi vuoi depositare?\n");
    scanf("%f", &soldi);
    *salvadanaio += soldi;
}

void saldo(float *salvadanaio){
    int d;

    printf("\nVuoi visualizzare il saldo? 1/0\n");
    scanf("%d", &d);

    if(d==1)
        printf("\nSaldo: %.2f.", *salvadanaio);
}



















