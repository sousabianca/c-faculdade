#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
main ()
{
setlocale(LC_ALL, "Portuguese");
int estoq, qmin, qmax;
printf("Informe a quantidade m�xima: ");
scanf("%d", &qmax);
printf("Informe a quantidade m�nima: ");
scanf("%d",&qmin);
estoq = (qmin+qmax)/2;
printf("O estome m�dio �: %d",estoq);
getch();
}
