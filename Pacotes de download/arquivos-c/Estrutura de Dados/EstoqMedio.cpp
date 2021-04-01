#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
main ()
{
setlocale(LC_ALL, "Portuguese");
int estoq, qmin, qmax;
printf("Informe a quantidade máxima: ");
scanf("%d", &qmax);
printf("Informe a quantidade mínima: ");
scanf("%d",&qmin);
estoq = (qmin+qmax)/2;
printf("O estome médio é: %d",estoq);
getch();
}
