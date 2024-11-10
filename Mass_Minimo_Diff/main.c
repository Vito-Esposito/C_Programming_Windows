#include <stdio.h>
#include <stdlib.h>

float massimo(int, float*);
float minimo(int, float*);
void differenza(float, float, float);

int main()
{
    int n1, i;
    float max, min, valore;

    printf("Quanti valori vuoi inserire nell'insieme dove cercherai il massimo e minimo?\n");
    scanf("%d", &n1);
    printf("\n");

    float a[n1];

    for(i=0; i<n1; i++){
        printf("Inserisci elemento a[%d]: \n", i);
        scanf("%f", &a[i]);
    }

    max= massimo(n1,a);
    min= minimo(n1,a);

    printf("\nIl massimo e' %.2f e il minimo e' %.2f.", max, min);

    printf("\nInserisci valore: \n");
    scanf("%f", &valore);
    differenza(max, min, valore);

    return 0;
}

float massimo(int n, float a[]){
    int i;
    float max;

    max= a[0];

    for(i=1; i<n; i++){
        if(a[i] > max)
            max= a[i];
    }

    return max;
}

float minimo(int n, float a[]){
    int i;
    float min;

    min= a[0];

    for(i=1; i<n; i++){
        if(a[i] < min)
            min= a[i];
    }

    return min;
}

void differenza(float max, float min, float valore){

    if(max-min < valore)
        printf("\nLa differenza tra %.2f e %.2f (max e min) e' minore del valore (%.2f) inserito.\n", max, min, valore);
    else if(max-min == valore)
        printf("\nLa differenza tra %.2f e %.2f (max e min) e' uguale al valore (%.2f) inserito.\n", max, min, valore);
    else
        printf("\nLa differenza tra %.2f e %.2f (max e min) e' maggiore del valore (%.2f) inserito.\n", max, min, valore);
}























