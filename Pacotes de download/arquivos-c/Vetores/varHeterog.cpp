#include <conio.h>
#include <stdio.h>
#include <string.h>
#define tam 2
struct automovel{
int ano,km;
float custo_manut;
char Nome_Prop[30];
char Marca[10] ;
char Fabr[10], Placa[7], Tipo_Manut[30];
};



int main(void)
{
struct automovel p[tam];
int i;
// ? struct automovel p[tam];?
for(i=0;i<tam;i++)
   {
   fflush(stdin);
   printf("\nEntre com o nome do proprieta'rio: ");
   gets(p[i].Nome_Prop);
      fflush(stdin);
   printf("\nEntre com a marca do automovel: ");
   gets(p[i].Marca);
      fflush(stdin);
   printf("Entre com o ano de fabricacao: ");
   scanf("%d",&p[i].ano);
   printf("Entre com a Placa: ");
      fflush(stdin);
   gets(p[i].Placa);
   printf("Entre com a quilometragem: ");
      fflush(stdin);
   scanf("%d",&p[i].km);
   printf("Entre com o tipo de manutencao: ");
   fflush(stdin);
   gets(p[i].Tipo_Manut);
   printf("Entre com o custo: ");
      fflush(stdin);
   scanf("%f",&p[i].custo_manut);
   printf("Entre com o fabricante: ");
   fflush(stdin);
   gets(p[i].Fabr);
   }
   for(i=0;i<tam;i++)
   {
   printf(" \t%s ",p[i].Nome_Prop);
   printf(" \t%s ",p[i].Marca);
   printf(" \t%s ",p[i].Fabr);
   printf(" \t%d ",p[i].ano);
   printf(" \t%s \n",p[i].Placa,p[i].km);
   printf(" \t%d ",p[i].km);   
   printf(" \t%s ",p[i].Tipo_Manut);
   printf(" \t%f ",p[i].custo_manut);
   }
getch();}



