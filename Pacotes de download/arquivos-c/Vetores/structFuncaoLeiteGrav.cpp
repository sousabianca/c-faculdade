#include <conio.h>
#include <stdio.h>
#include <string.h>

struct est_endereco
{
char rua[50];
int numero;
};
struct ficha{
int matricula;
char nome [45];
float salario;
struct est_endereco endereco;
};

int main(void)
{
 int i;
 FILE *fp; 
 struct ficha f1;
 
   printf("Entre com a matricula do funciona'rio: ");
   scanf("%d",&f1.matricula);
   printf("\nEntre com o nome: ");
   fflush(stdin); // para limpar o buffer do teclado
   gets(f1.nome);
   printf("\nEntre com o salario: ");
   scanf("%f",&f1.salario);
// Acessando a estrutra est_endereço
   printf("\nEntre com a rua: ");
    fflush(stdin); // para limpar o buffer do teclado
   scanf("%s",&f1.endereco.rua);
   printf("\nEntre com o nu'mero: ");
   scanf("%d",&f1.endereco.numero);
fp=fopen("test.txt","a");
	if(!fp)
	{
    	printf( "Erro na abertura do arquivo");
	}   
	fprintf(fp," Matricula: %d",f1.matricula);
	fprintf(fp,"\t Nome: %s",f1.nome);
	fprintf(fp,"\t Salario: %f",f1.salario);
	fprintf(fp,"\t Rua: %s",f1.endereco.rua);
fprintf(fp,"\t numero: %d",f1.endereco.numero);
	fprintf(fp,"\n");
/*	fprintf(fp," %d",f1.matricula);
	fprintf(fp,"\t %s",f1.nome);
	fprintf(fp,"\t %f",f1.salario);
	fprintf(fp,"\t %s",f1.endereco.rua);
	fprintf(fp,"\t %d",f1.endereco.numero);
	fprintf(fp,"\n");*/
fclose(fp);
		
// imprimindo os registros
    printf(" \t%d \n",f1.matricula );
    printf(" \t%s \n",f1.nome);    
    printf(" \t%f \n",f1.salario );
    printf(" \t%s \n",f1.endereco.rua );
    printf(" \t%d \n",f1.endereco.numero );
getch();}

