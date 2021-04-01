#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include "calcArq.h"

main(){
	float n1, n2, x;
	char op;
	setlocale(LC_ALL, "");
	printf(" Informe qual operação você deseja \n");
	printf("(+) Adição \n(-) Subtração \n(*) Multiplicação \n(/) Divisão \n: ");
	scanf("%c", &op);
	printf("Informe n1: ");
	scanf("%f", &n1);
	printf("Informe n2: ");
	scanf("%f", &n2);
	
	if (op == '+')
		{x = soma(n1,n2);}
	else if (op == '-')
		{x = sub(n1,n2);}
	else if (op == '*')
		{x = mult(n1,n2);}
	else if (n2 ==0)
	{	
		printf("Denominador não pode ser 0, tente novamente!\n");
	}
		else if (op=='/')
			{x = div(n1,n2);}	
	
	printf("%.2f %c %.2f = %.2f",n1,op,n2,x);
}
