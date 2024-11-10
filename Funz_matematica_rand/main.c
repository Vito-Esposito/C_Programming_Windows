#include <stdio.h>
#include <stdlib.h>

void funz_mat(float, float*);

int main()
{
    int i;
    float x;
    float *y= malloc(sizeof(float));

    srand(time(NULL));

    printf("Per 20 x casuali reali in [0,1]: \n");

    for(i=1; i<=20; i++){
        x= 0+(1-0)*(float)rand()/(float)RAND_MAX;
        printf("\n(x = %f)", x);

        funz_mat(x, y);
        printf("\ny vale: %.2f.\n", *y);
    }

    free(y);

    return 0;
}

void funz_mat(float x, float *y){
    *y= ((x*x*x)+(3*x)+5)/((8*x)+1);
}
