#include <stdio.h>
#include <conio.h>

main ()
{
char nome[30], endereco[20];
printf("\n Qual seu nome?\n ");
gets(nome);
printf("\n Qual seu endereco? \n");
gets(endereco);
printf("\nO Seu nome e´: %s \n E seu endereco e´: %s \n",nome,endereco);
getch();
}

