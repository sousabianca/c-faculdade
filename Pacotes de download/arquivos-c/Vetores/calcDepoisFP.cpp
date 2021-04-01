#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
	float calc (float a, float b); //prototipo da fução
	float n1, n2, x;
	setlocale(LC_ALL, "");

	printf("Informe n1: ");
	scanf("%f",&n1);
	printf("Informe n2: ");
	scanf("%f", &n2);
	x = calc(n1,n2); // chamada da função
	//printf("%.2f %c %.2f = %.2f",n1,op,n2,x);
	printf("O valor da operação é: ",x);
}

float calc(float a, float b){
	float r;
	char op;
	printf(" Informe qual operação você deseja \n");
	printf("(+) Adição \n(-) Subtração \n(*) Multiplicação \n(/) Divisão \n: ");
	scanf("%c", &op);
	
	if (op=='+')
		{r=(a+b);}
	else if (op=='-')
		{r=(a-b);}
	else if (op=='*')
		{r=(a*b);}
	else if (b==0){
			printf("Impossível dividir por 0, tente novamente!");
		}
		else
			{r=(a/b);}
}
