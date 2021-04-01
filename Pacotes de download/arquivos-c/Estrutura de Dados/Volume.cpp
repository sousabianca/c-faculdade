#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
float v, c, h, l;
setlocale(LC_ALL, "");
printf("Comprimento: ");
scanf("%f",&c);
printf("Altura: ");
scanf("%f",&h);
printf("Largura: ");
scanf("%f",&l);
v = (c*h*l);
printf("O volume da caixa é: %.2f",v);
getch();
}
