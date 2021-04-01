#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");
int idade;
char nome[50];
printf("Digite seu nome: \n");
gets(nome);
printf("Informe sua idade: \n");
scanf("%d",&idade);
if (idade>=18)
{
	printf("%s já é de maior",nome);n
}
else
{
	printf("%s ainda é de menor",nome);
}
getch();
}
