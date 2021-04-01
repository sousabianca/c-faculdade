#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
float c,f;
setlocale(LC_ALL, "");
printf("Entre com a temperatura em Celsius: \n");
scanf("%f",&c);
f = 9*c + 160/5;
printf("A temperatura em F é: %.2f", f);
}
