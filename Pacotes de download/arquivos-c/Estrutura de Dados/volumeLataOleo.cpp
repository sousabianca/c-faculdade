#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main ()
{
float v, r , h;
setlocale(LC_ALL, "");
//pi = 3.14159;
printf("Valor do raio: ");
scanf("%f",&r);
printf("Altura: ");
scanf("%f",&h);
v = M_PI * pow(r,2) * h;
printf("O valor do volume é %.2f",v);
getch();
}
