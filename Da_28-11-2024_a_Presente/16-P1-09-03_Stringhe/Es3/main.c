/*
trova lunghezza di una stringa
*/

/*
Quando un puntatore p punta a una stringa (che in C è un array di caratteri terminato dal carattere nullo \0), 
i seguenti comportamenti sono osservabili:
p contiene l'indirizzo della stringa, cioè l'indirizzo della prima cella dell'array di caratteri.
*p rappresenta il valore del primo carattere dell'array. Se la stringa è "ciao", allora *p è 'c'.
*(p + 1) accede al valore della seconda cella dell'array, cioè il carattere 'i'. In alternativa, puoi scrivere anche p[1].
*(p + 2) accede al terzo carattere, cioè 'a'.
*(p + 3) accede al quarto carattere, cioè 'o'.
*(p + 4) accede al terminatore nullo \0, che indica la fine della stringa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lunghezza_stringa(char*);

int main(){
    char *ps= "Let's go!";

    printf("Lunghezza stringa: %d", lunghezza_stringa(ps));
    printf("\nLunghezza stringa con libreria string.h: %d", strlen(ps));

    return 0;
}

int lunghezza_stringa(char *ps){
    int i=0;

    while(*ps != '\0'){
        ps++;
        i++;
    }

    return i;
}