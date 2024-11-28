#include <stdio.h>
#include <stdlib.h>

float distanza_tra_due_punti(float, float, float, float);
void traslazione_punto(float, float);

int main(){
    float a_x, a_y, b_x, b_y, distanza;

    printf("Inserisci le coordinate di A e B.\n");
    scanf("%f%f%f%f", &a_x,&a_y,&b_x,&b_y);

    distanza= distanza_tra_due_punti(a_x,a_y,b_x,b_y);

    printf("\nLa distanza e': %.2f.\n", distanza);

    printf("\nInserisci coordinate di un altro punto: \n");
    scanf("%f%f", &a_x, &a_y);
    traslazione_punto(a_x, a_y);
    return 0;
}

float distanza_tra_due_punti(float a_x, float a_y, float b_x, float b_y){
    return sqrt(((b_x-a_x)*(b_x-a_x)+(b_y-a_y)*(b_y-a_y)));
}

void traslazione_punto(float x, float y){
    float t1, t2;

    printf("\nInserire punti del vettore che trasleranno il punto precedente: \n");
    scanf("%f%f", &t1, &t2);

    x += t1;
    y += t2;

    printf("\nIl punto traslato avra' coordinate (%.1f,%.1f).\n", x,y);
}
