#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
main()
{
float vel, v0, a, ds, s, s0;
setlocale(LC_ALL, "Portuguese");

printf("Entre com os valor de V0: ");
scanf("%f",&v0);

printf("Entre com o valor de A: ");
scanf("%f",&a);

printf("Entre com o valor de S: ");
scanf("%f",&s);

printf("Entre com o valor de S0: ");
scanf("%f",&s0);

ds = (s-s0);

vel = sqrt(pow(v0,2) + 2*a*ds);

printf("A velocidade e´: %.2f",vel);

getch();
}
