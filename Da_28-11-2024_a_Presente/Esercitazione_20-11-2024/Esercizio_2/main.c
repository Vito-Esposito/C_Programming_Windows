/*
Esercizio 2 ( AVANZATO):
- Creare una matrice 2D con 5 righe e 5 colonne che contiene i caratteri. Ad esempio:
char a[5][5] = {
{'f', 'i', 'o', 'r', 'i'},
{'v', 'e', 'n', 't', 'o'},
{'p', 'i', 'a', 'n', 'o'},
{'r', 'i', 'c', 'c', 'i'},
{'m', 'o', 'n', 'd', 'o'}
};
- Scrivere una funzione che cerchi le parole "riccio" e "cielo" all'interno della matrice e
restituisca l'indice della riga che contiene la parola.
- Se una parola non viene trovata, la funzione deve stampare "password errata".
- Esegui la funzione sia utilizzando la notazione standard che utilizzando la notazione
a puntatore.
Output:
- Per la parola "riccio", la funzione deve restituire 3 (l'indice della riga che contiene la parola).
- Per la parola "cielo", la funzione deve stampare "password errata" (poiché non è presente
nella matrice). 
*/

#include <stdio.h>
#include <stdlib.h>

// int ricerca_std(char[][5], int, int, char[]);
int ricerca_pnt(char*, int, int, char*);

int main(){
    char a[5][5] = {
                        {'f', 'i', 'o', 'r', 'i'},
                        {'v', 'e', 'n', 't', 'o'},
                        {'p', 'i', 'a', 'n', 'o'},
                        {'r', 'i', 'c', 'c', 'i'},
                        {'m', 'o', 'n', 'd', 'o'}
                    };

    int righe= 5, colonne= 5;

    char parola_1[5]= {'r', 'i', 'c', 'c', 'i'};
    char parola_2[5]= {'c', 'i', 'e', 'l', 'o'};

    ricerca_pnt(&a[0][0], righe, colonne, parola_1);
    ricerca_pnt(&a[0][0], righe, colonne, parola_2);







    return 0;
}

 /*
int ricerca_std(char a[][5], int n, int m, char parola[]){
    int i, j, flag= 1;;

    for(i=0; i<n; i++){
        flag= 1;
        for(j=0; j<m; j++){
            if(parola[j] != a[i][j]){
                flag= 0;
            }
        }

        if(flag != 0){
            printf("\nPassword trovata a riga %d!", i+1);
            return i+1;
        }
    }

    printf("\nPassword non trovata.");
}
*/

int ricerca_pnt(char *matrice, int righe, int colonne, char *a){
    int i, j, flag= 1;
    char temp;

    for(i=0; i<righe; i++){
        flag= 1;
        for(j=0; j<colonne; j++){
            temp= *(matrice+colonne*i+j);
            if(*(a+j) != temp){
                flag= 0;
            }
        }

        if(flag != 0){
            printf("\nPassword trovata a riga %d!", i+1);
            return i+1;
        }
    }

    printf("\nPassword non trovata.");
    return 0;
}


