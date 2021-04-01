#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define x 5

main(){
int i, a[x], b[x], soma=0;
setlocale(LC_ALL, "");
for (i=0; i<x; i++){
	soma = soma + a[i] + b [i];
	printf("A soma do índice a[%d]+b[%d] = \n",i,i);
	scanf("%d", &soma);
}
getch();
}
