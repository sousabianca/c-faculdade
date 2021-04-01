#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

main()
{
float x, n1, n2;
int op;
setlocale(LC_ALL, "Portuguese");
printf(" Informe qual operação você deseja \n");
printf("(1) Adição \n(2) Subtração \n(3) Multiplicação \n(4) Divisão: ");
scanf("%d", &op);

printf("Informe n1: \n");
scanf("%f", &n1);
printf("Informe n2: \n");
scanf("%f", &n2);
if (op==1)

	x = n1 + n2;

else if (op==2)
	
	x = n1 - n2;
	
else if (op==3)
		
	x = n1 * n2;
		
else if (op==4)
			
	x = n1 / n2;
	
else
	printf("Opção inválida, tente novamente!");
			

printf("\nO resultado é: %.2f",x);
getch();

}
