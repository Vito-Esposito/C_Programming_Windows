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
