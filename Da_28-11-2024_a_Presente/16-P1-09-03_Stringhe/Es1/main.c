/* 
conta numero di caratteri inseriti da tastiera fino al carattere di fine immissione (EOF)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i= 0;
    char c;

    while((c=getchar()) != EOF){
        if (c != '\n')  // Non contare i caratteri newline (\n)
            i++;
        }

    printf("\nNumero di caratteri: %d.", i);

    return 0;
}