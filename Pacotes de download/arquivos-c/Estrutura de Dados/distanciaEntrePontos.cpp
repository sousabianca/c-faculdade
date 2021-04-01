#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
{
setlocale(LC_ALL, "Portuguese");
printf("###### Distância entre dois pontos ######");
float x1, x2, y1, y2, d;

printf("\n Informe X1: \n");
scanf("%.2f",&x1);

printf("\nInforme X2: \n");
scanf("%.2f",&x2);

printf("\nInforme Y1: \n");
scanf("%.2f",&y1);

printf("\nInforme Y2: \n");
scanf("%.2f",&y2);

d = sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));
//d = sqrt((x2-x1) * (x2-x1) + (y2-y1)*(y2-y1));

printf("\nA distância entre os dois pontos é: %.2f",d);
getch();
}
