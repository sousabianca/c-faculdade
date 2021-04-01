#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define tam 2

struct est_endereco{
	char endFunc [30];
	int numCasa;
};

struct ficha{
	int matricula;
	char nomeFunc [40];
	float sal;
	struct est_endereco endereco;	
};


int main (void)
{
	setlocale(LC_ALL, "");
	int i;
	struct ficha f[tam];
	
	for(i=0; i<tam; i++){
		printf("Informe sua matrícula: ");
		scanf("%d", &f[i].matricula);
		fflush(stdin);
		printf("\nInforme seu nome: ");
		gets(f[i].nomeFunc);
		fflush(stdin);
		printf("\nInforme seu salário: ");
		scanf("%f", &f[i].sal);
		fflush(stdin);
		printf("\nInforme seu endereço: ");
		//scanf("%c", &f[i].endereco.endFunc);
		gets(f[i].endereco.endFunc);
		fflush(stdin);
		printf("Informe o número da casa: ");
		scanf("%d", &f[i].endereco.numCasa);
		fflush(stdin);
	}
	for(i=0; i<tam; i++){
		printf("\t%d\n", f[i].matricula);
		printf("\t%s\n", f[i].nomeFunc);
		printf("\t%.2f\n", f[i].sal);
		printf("\t%s\n", f[i].endereco.endFunc);
		printf("\t%d\n", f[i].endereco.numCasa);
	getch();
	}
}
