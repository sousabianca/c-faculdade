float soma (float a, float b){
	float r;
	r = (a+b);
	return (r);
}
float sub (float a, float b){
	float r;
	r = (a-b);
	return (r);
}
float mult (float a, float b){
	float r;
	r = (a*b);
	return (r);
}
float div (float a, float b){
	float r;
	if (a==0 && b==0){
		printf("N�o � poss�vel dividir por 0!");
	}
	else{
		r = (a/b);
	}
	return (r);
}
