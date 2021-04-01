#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
float n1, n2, valor;
setlocale(LC_ALL,"");
printf("Informe n1: ");
scanf("%f",&n1);
printf("Informe n2: ");
scanf("%f",&n2);
valor = (n1+n2);
if (valor>=10)
{
	valor = (valor+5);
	printf("Valor acrescido de 5: %.2f",valor);
}
else 
{
	valor = (valor-7);
	printf("Valor subtraído de 7: %.2f",valor);
}
getch();
}
