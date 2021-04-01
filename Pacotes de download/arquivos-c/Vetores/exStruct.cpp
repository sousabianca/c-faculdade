#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define tam 2

struct ficha{
	int matricula, numCasa;
	char nomeFunc [40];
	char endFunc [30];
	float sal;	
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
		scanf("%s",&f[i].nomeFunc);
		fflush(stdin);
		printf("\nInforme seu salário: ");
		scanf("%f", &f[i].sal);
		fflush(stdin);
		printf("\nInforme seu endereço: ");
		scanf("%c", &f[i].endFunc);
		fflush(stdin);
		printf("Informe o número da casa: ");
		scanf("%d", &f[i].numCasa);
		fflush(stdin);
	}
	for(i=0; i<tam; i++){
		printf("\t%d\n", f[i].matricula);
		printf("\t%s\n", f[i].nomeFunc);
		printf("\t%f\n", f[i].sal);
		printf("\t%s\n", f[i].endFunc);
		printf("\t%d\n", f[i].numCasa);
	getch();
	}
}
