#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Scrivere una function C che, data come parametro di input una stringa testo
che rappresenta un testo in italiano, determina e restituisce come parametro
di output la media delle lunghezze delle parole contenute nella stringa testo.
Nel testo le parole sono separate da uno o più ‘spazi’. 
Valutare e commentare la complessità di tempo della function (operazione dominante: somma).
*/

float media_lunghezza_parole(char[]); 
int lunghezza_parole(char[]);

int main(){
    char testo[]="Ciao mondo nuovo";

    printf("Lunghezza testo: %d", lunghezza_parole(testo));
    printf("\nMedia delle lunghezze delle parole nella stringa: %.2f", media_lunghezza_parole(testo));
    
    return 0;
}

int lunghezza_parole(char string[]){
    int i=0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

float media_lunghezza_parole(char string[]){
    int i=0;
    float lunghezza_parola=0, numero_parole=0, in_parola=0;

for(i=0; i<lunghezza_parole(string); i++){

    if(string[i] != ' '){
        lunghezza_parola++;
        in_parola=1;
    }else if(string[i] == ' ' && in_parola==1){
        numero_parole++;
        in_parola= 0;
    }
}

    if (in_parola) {
        numero_parole++;
    }

    return lunghezza_parola/numero_parole;
}



