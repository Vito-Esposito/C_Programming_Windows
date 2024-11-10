void riempi_array(float array[], int n){
    int i;

    for(i=0; i<n; i++){
        printf("Inserisci a[%d]: ", i);
        scanf("%f", &array[i]);
    }
}

void massimo(float array[], float *max, int *i_max, int n){
    int i;

    *max= array[0];

    for(i=1; i<n; i++){
        if(array[i] > *max){
            *max= array[i];
            *i_max=i;
        }
    }
}

void minimo(float array[], float *min, int *i_min, int n){
    int i;

    *min= array[0];

    for(i=1; i<n; i++){
        if(array[i] < *min){
            *min= array[i];
            *i_min=i;
        }
    }
}
