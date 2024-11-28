#include <stdio.h>
#include <stdlib.h>

void formula(int*);
int f(int);

int main()
{
    int *s;

    formula(s);
    printf("\nIl risultato e': %d.", *s);

    return 0;
}

void formula(int*s){
    int i, a;

    for(i=0; i<3; i++){
        printf("Dammi il %d numero:\n", i+1);
        scanf("%d", &a);
        *s += f(a);
        }
}

int f(int a){
    static int cnt=1;
    ++cnt;

    if(cnt%2 ==0)
    return a+cnt;
}






