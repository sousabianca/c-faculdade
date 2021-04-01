#include <stdio.h>
#include <conio.h>
#include <locale.h>

float calc (float a, float b){
	float x;
	char op;
	printf(" Informe qual operação você deseja \n");
	printf("(+) Adição \n(-) Subtração \n(*) Multiplicação \n(/) Divisão \n: ");
	scanf("%d", &op);
	switch(op)
	{
	case '+':
		x = (a+b);
		break;
	case '-':
		x = (a - b);
		break;
	case '*':
		x = (a * b);
		break;
	case '/':
		x = (a/b);
		break;
	default:
		printf("Opção inválida, tente novamente!");
		break;
	}
}

main (){
	float n1, n2, r, op2;
	setlocale(LC_ALL, "");
	
	printf("Informe n1: \n");
	scanf("%f", &n1);
	printf("Informe n2: \n");
	scanf("%f", &n2);
	r = calc(n1,n2);
	printf(" %.2f %c %.2f = %.2f",n1,op2,n2,r);	
}

