#include <stdio.h>
#include <locale.h>

main (){
	float soma2(float, float);
	float n1,n2, x;
	char op;
	setlocale(LC_ALL, "");
	
	printf(" Informe qual opera��o voc� deseja \n");
	printf("(+) Adi��o \n(-) Subtra��o \n(*) Multiplica��o \n(/) Divis�o \n: ");
 	scanf("%c", &op);
 	
 	if (op=='+')
	 	{x = soma2(n1,n2);}
	/*else if (op=='-')
		{x = soma2()}
	else if (op=='*')
		{}
	else
		{}*/
}
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
