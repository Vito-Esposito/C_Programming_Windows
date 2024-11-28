#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char *p = "informatica";
    char a[20] = "calcolo";

    puts(p);        // Stampa la stringa puntata da p
    printf("%s\n", p);
    puts(a);        // Stampa la stringa contenuta nell'array a

    p = "applicata"; // Cambia il puntatore p per puntare a "applicata"

    for (i = 0; i < 12; i++) {
        a[i] = "numerico"[i]; // Copia i caratteri della stringa "numerico" in a
    }

    puts(p);        // Stampa la nuova stringa puntata da p
    puts(a);        // Stampa il contenuto aggiornato di a

    return 0;
}
