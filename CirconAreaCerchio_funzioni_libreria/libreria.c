float circonf(float r){
	const float pi_greco= 3.1415926;
	
	return 2*pi_greco*r;
}

float area_cerchio(float circonf){
	float c;
	const float pi_greco= 3.1415926;
	
	c= circonf;
		
	return (c*c)/(4*pi_greco);
}
