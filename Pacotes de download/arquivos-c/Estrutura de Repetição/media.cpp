#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
float n1, n2, media;
setlocale(LC_ALL, "");
printf("Informe nota 1: ");
scanf("%f", &n1);
printf("Informe nota 2: ");
scanf("%f", &n2);

media = (n1+n2)/2;

if (media < 3)
	printf("Reprovado!");
else if ((media >= 3) && (media < 6))

	printf("Recuperação!");
else if (media >=6)
	printf("Aprovado!");
getch();
}
