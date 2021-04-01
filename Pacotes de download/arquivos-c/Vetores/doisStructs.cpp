#include <conio.h>
#include <stdio.h>
#include <string.h>

#define Tamanho 1
struct est_endereco
{
char rua[50];
int numero;
char complem[10];
char bairro[20];
char cep[10];
};
struct ficha{
int matricula;
char nome [45];
char depto [35];
float salario;
struct est_endereco endereco;
};

int main(void)
{
 int i;
 struct ficha f[Tamanho];
 for(i=0; i<Tamanho; i++)
   {
   printf("Entre com a matricula do funciona'rio: ");
   scanf("%d",&f[i].matricula);
   printf("\nEntre com o nome: ");
   scanf("%s",&f[i].nome);
   printf("\nEntre com o departamento: ");
   scanf("%s",&f[i].depto);
   printf("\nEntre com o salario: ");
   scanf("%f",&f[i].salario);
   printf("\nEntre com o endereco: ");
   printf("\nEntre com a rua: ");
   scanf("%s",&f[i].endereco.rua);
   printf("\nEntre com o nu'mero: ");
   scanf("%d",&f[i].endereco.numero);
   printf("\nEntre com o complemento: ");
   scanf("%s",&f[i].endereco.complem);     
   printf("\nEntre com o bairro: ");
   scanf("%s",&f[i].endereco.bairro); 
 printf("\nEntre com o CEP: ");
   scanf("%s",&f[i].endereco.cep); 
}

for(i=0;i <Tamanho; i++)
    {
    printf(" \t%d \n",f[i].matricula );
    printf(" \t%s \n",f[i].nome);    
    printf(" \t%s \n",f[i].depto );
    printf(" \t%f \n",f[i].salario );
    printf(" \t%s \n",f[i].endereco.rua );}
    printf(" \t%d \n",f[i].endereco.numero );
    printf(" \t%s \n",f[i].endereco.complem );
    printf(" \t%s \n",f[i].endereco.bairro );
    printf(" \t%s \n",f[i].endereco.cep );
 
getch();}

