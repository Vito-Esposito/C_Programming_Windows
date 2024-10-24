//FUNZIONI
float media_n_numeri_inseriti(int n){
	int i;
	float num=0, media, somma=0;
	
	for(i=0; i<n; i++){
		scanf("%f", &num);
		
		somma= somma+num;
	}
	
	return somma/i;
}

float trova_massimo(){
	float valore, valore_prec=0;
	
	do{
		scanf("%f", &valore);
		
		if(valore >= valore_prec){
			valore_prec= valore;
		}
		
	}while(valore != -1);
	
	return valore_prec;	
}

int media_flag(){
	int i=-1, media=0, num=0;
	
	do{
		media += num;
		scanf("%d", &num);
		i++;
	}while(num!=-1);	
	
	media= media/i;

	return media;		
}

void stampa_rettangolo(int n, int m){
	int i, j;
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("*");
	printf("\n");
	}
}

void stampa_triangolo(int n){
	int i, j;
	
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++)
			printf("*");
		
		printf("\n");
	}
}

int media_10(){
	int i, num, media; 
	
	for(i=0; i<10; i++){
		scanf("%d", &num);
		media += num;
	}
	
	return media= media/10;
}

float area_cerchio(float circonf){
	float c;
	const float pi_greco= 3.1415926;
	
	c= circonf;
		
	return (c*c)/(4*pi_greco);
}

float circonf(float raggio){
	const float pi_greco= 3.1415926;
	
	return 2*pi_greco*raggio;
}

float area_mag(float r_mag){
	float c;
	const float pi_greco= 3.1415926;
	
	c= circonf(r_mag);
	
	return (c*c)/(4*pi_greco);
}

float area_min(float r_min){
	float c;
	const float pi_greco= 3.1415926;
	
	c= circonf(r_min);
	return (c*c)/(4*pi_greco);	
}

float valore_assolutoF(float numero){
	
	if(numero>=0)
		return numero;
	else
		return -(numero);
}

float errore_relativoF(float x, float y){
	return valore_assolutoF(x-y)/valore_assolutoF(x);
}

int somma_primi_n_naturali(int n){
	int i, somma=0;
	
	for(i=1; i<=n; i++)
		somma+=i;
		
	return somma;
}

float sommatoria_armonica(int n){
	int i;
	float somma=0;
	
	for(i=1; i<=n; i++)
		somma = somma + 1/(float)i;
	
	return somma;
}

//PROCEDURE
void circonf_rif(float r, float*c){
	const float pi_greco= 3.1415926F;
	
	*c= pi_greco*r*2;
}

void scambiare(int*x, int*y){
	int temp;
	
	temp= *x;
	*x= *y;
	*y= temp;
}
