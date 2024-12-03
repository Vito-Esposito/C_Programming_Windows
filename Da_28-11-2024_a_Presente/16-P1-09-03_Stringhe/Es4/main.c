/*
concatena due stringhe
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lunghezza_stringa(char[]);
int lunghezza_stringa_punt(char*);
void concat(char[], char[]);

int main(){
    char p1[]="Gatto";
    char p2[]="Lupo";

    printf("Lunghezza della prima parola: %d", lunghezza_stringa(p1));
    printf("\n");
    printf("Lunghezza della seconda parola: %d", lunghezza_stringa_punt(p2));


    //concat(p1, p2);
    //strcat(p1,p2);
    strncat(p1,p2,4);
    printf("\nLa stringa concatenata e': %s", p1);



    return 0;
}

int lunghezza_stringa(char parola[]){
    int i=0;

    while(parola[i] != '\0'){
        i++;
    }

    return i;
}

int lunghezza_stringa_punt(char *parola){
    int i=0;

    while(*(parola) != '\0'){
        parola++;
        i++;
    }

    return i;
}

void concat(char parola1[], char parola2[]){
    int i, j= lunghezza_stringa(parola1);

    for(i=0; parola2[i]!='\0'; i++, j++){
        parola1[j]= parola2[i]; 
    }

    parola1[j]= '\0';
}