#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

main()
{
float x, n1, n2;
int op;
setlocale(LC_ALL, "Portuguese");
printf(" Informe qual opera��o voc� deseja \n");
printf("(1) Adi��o \n(2) Subtra��o \n(3) Multiplica��o \n(4) Divis�o: ");
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
	printf("Op��o inv�lida, tente novamente!");
			

printf("\nO resultado �: %.2f",x);
getch();

}
