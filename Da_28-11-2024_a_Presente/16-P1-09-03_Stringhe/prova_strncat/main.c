#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[20]="Ciao";
    char str2[20]="cane";

    strncat(str1, str2, 2);

    printf("\n%s", str1);




}