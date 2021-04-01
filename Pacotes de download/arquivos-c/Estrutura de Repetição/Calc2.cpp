#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main ()
{
float x, n1, n2;
char resp,op;
setlocale(LC_ALL, "Portuguese");
do{
	

printf(" Informe qual operação você deseja \n");
printf("(+) Adição \n(-) Subtração \n(*) Multiplicação \n(/) Divisão \n: ");
scanf("%c", &op);

printf("Informe n1: \n");
scanf("%f", &n1);
printf("Informe n2: \n");
scanf("%f", &n2);


switch (op)
{
	case '+':
		x = (n1+n2);
		break;
	case '-':
		x = (n1 - n2);
		break;
	case '*':
		x = (n1*n2);
		break;
	case '/':
		x = (n1/n2);
		break;
	default:
		printf("Opção inválida, tente novamente!");
		break;

}
printf(" %.2f %c %.2f = %.2f",n1,op,n2,x);
printf("\n Deseja continuar? (s) Sim (n) Não \n");
scanf(" %c", &resp);
}
while (resp == 's' || resp == 'S');
printf("Saindo do programa...");
getch();
}

