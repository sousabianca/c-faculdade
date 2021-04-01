#include <stdio.h>
#include <conio.h>
#define x 5
#include <locale.h>

main (){
	setlocale(LC_ALL, "");
	int i, a[x], b[x], soma =0;
	for (i=0;i<x;i++)
	{
		printf("\n Entre com o elemto de indice %d do vetor A e B: ",i);
		scanf("%d %d", &a[i], &b[i]);
		soma = soma + a[i] + b [i];
	}
	for (i=0;i<x;i++){
	  printf("\n A[%d]= %d",i,a[i]); 
	  printf("\n B[%d]= %d",i,b[i]); 
	}
	
	printf("\nA soma dos elementos dos dois vetores e': %d", soma);
	getch();
}
