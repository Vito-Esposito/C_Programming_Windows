#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sostituisci_occorrenze(char *testo, const char *chiave, const char *subs);

int main() {
    char testo[256] = "Ciao mondo nuovo, nuovo mondo ciao!";
    const char chiave[] = "nuovo";
    const char subs[] = "vecchio";

    printf("Testo originale: %s\n", testo);
    sostituisci_occorrenze(testo, chiave, subs);
    printf("Testo modificato: %s\n", testo);

    return 0;
}

void sostituisci_occorrenze(char *testo, const char *chiave, const char *subs) {
    int len_testo = strlen(testo);
    int len_chiave = strlen(chiave);
    int len_subs = strlen(subs);

    // Nuovo buffer per il testo modificato
    char *risultato = malloc((len_testo + 1) * 2); // Buffer più grande del necessario per sicurezza
    int index_risultato = 0;

    for (int i = 0; i < len_testo;) {
        // Controlla se "chiave" appare nella posizione corrente
        if (strncmp(&testo[i], chiave, len_chiave) == 0) {
            // Copia "subs" al posto di "chiave"
            strcpy(&testo[i], subs);
        } 
    }

    testo[len_testo] = '\0'; // Terminatore della stringa

}
