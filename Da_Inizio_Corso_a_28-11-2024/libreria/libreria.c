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

float sommatoria_n2(int n){
	int i;
	float somma=0;
	
	for(i=1; i<=n; i++)
		somma = somma + 1/(float)(pow(i, 2));

	return somma;
}

int fattoriale(int n){
	int i, fattoriale=1;
	
	if(n!=0)
		for(i=1; i<=n; i++)
			fattoriale= i*fattoriale;
	else
		fattoriale=1;
		
	return fattoriale;
}

float trova_massimo_ninput(int n){
	float numero_letto, massimo;
	int i;
	
	printf("\nInserisci i numeri: \n");
	
	printf("Numero 1: ");
	scanf("%f", &numero_letto);
	massimo= numero_letto;
	
	for(i=2; i<=n; i++){
		printf("Numero %d: ", i);
		scanf("%f", &numero_letto);
		
		if(numero_letto > massimo)
			massimo= numero_letto;
	}	
}

float trova_minimo_ninput(int n){
	float numero_letto, minimo;
	int i;
	
	printf("\nInserisci i numeri: \n");
	
	printf("Numero 1: ");
	scanf("%f", &numero_letto);
	minimo= numero_letto;
	
	for(i=2; i<=n; i++){
		printf("Numero %d: ", i);
		scanf("%f", &numero_letto);
		
		if(numero_letto < minimo)
			minimo= numero_letto;
	}	
}

int char_appartenenza_noarray(int n, char chiave){
	char c;
	int i=1, esito_ricerca=0;
	
	do{
		scanf(" %c", &c);
		if(chiave == c)
			esito_ricerca= 1;
		else
			esito_ricerca= 0;
		
	i++;	
	}while(esito_ricerca != 1 && i<=n);
	
	return esito_ricerca;
}

float sommatoria_3(int n){
	float somma=0;
	int i;
	float segno= -1;
	
	for(i=1; i<=n; i++){
		somma= somma + (float)segno*(1)/(float)((2.0*i)+1.0);
		segno= -segno;
	}
	
	return somma;
}

float sommatoria_geometrica(int n, float x){
	int i;
	float somma= 1.0, pot_x=1.0;
	
	for(i=1; i<=n; i++){
		pot_x= pot_x*x;
		somma= somma + pot_x;
	}	
	
	return somma;
}

int mcd(int a, int b){
	int r, temp;
	
	if(a < b){
		temp= a;
		a= b;
		b= temp;
	}
	
	r= a%b;
	
	if(r == 0)
		return b;		
	else
		while(r != 0){
			a= b;
			b= r;
			r= a%b;
		}
	
	return b;
}

float somma_array(float array[], int n){
	float somma= 0;
	int i;
	
	for(i=0; i<n; i++)
		somma= somma + array[i];
		
	return somma;	
}

float media_array(float somma, int n){
	return somma/(float)n;
}

float varianza_array(float array[], float media, int n){
	int i;
	float somma= 0;
	
	for(i=0; i<n; i++){
		somma= somma + (array[i]-media)*(array[i]-media);
	}
	
	return somma/(float)(n-1);
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

void massimo_minimo_ninput(int n, float*max, float*min){
	float numero_letto;
	int i;
	
	printf("Numero 1: ");
	scanf("%f", &numero_letto);
	
	*min= numero_letto;
	*max= numero_letto;
	
	for(i=2; i<=n; i++)
	{
		printf("Numero %d: ", i);
		scanf("%f", &numero_letto);
		
		if(numero_letto > *max)
			*max= numero_letto;
		else if(numero_letto < *min)
			*min= numero_letto;
	}
}

float trova_secondo_massimo_ninput(int n, float*max, float*s_max){
	float numero_letto;
	int i;
	
	printf("Numero 1: ");
	scanf("%f", &numero_letto);
	
	*max= numero_letto;
	
	printf("Numero 2: ");
	scanf("%f", &numero_letto);
	
	if(numero_letto > *max){
		*s_max= *max,
		*max= numero_letto; 
	}
	else
		*s_max= numero_letto;
	
	for(i=3; i<=n; i++){
		printf("Numero %d: ", i);
		scanf("%f", &numero_letto);
		
		if(numero_letto > *max){
			*s_max= *max;
			*max= numero_letto;
		}
		else if(numero_letto > *s_max && numero_letto < *max)
			*s_max= numero_letto;
	}
}

void riempi_array(float array[], int n){
	int i;
	
	printf("\n");
	
	for(i=0; i<n; i++){
		printf("Array[%d]: ", i);
		scanf("%f", &array[i]);
	}
}

void leggi_array(float array[], int n){
	int i;
	
	printf("\n");
	
	for(i=0; i<n; i++)
		printf("Array[%d]: %.2f\n", i, array[i]);
}

void potenza_procedure(float * a, int n){
	int i;
	float num;
	
	num= *a;
	*a= 1;
		
	for(i=1; i<=n; i++)			
		*a = (*a)*num;		
}
