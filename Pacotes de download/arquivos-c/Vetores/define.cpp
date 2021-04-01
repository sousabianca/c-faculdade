#include <stdio.h>
#include <conio.h>
#define x 6
#include <locale.h>

main (){
int i, a[x];
setlocale(LC_ALL, "");
for (i=0; i<x; i++){
	printf("Digite o índice %d: ",i);
	scanf("%d",&a);
}
for (i=0; i<x; i++){
	printf("\n A[%d]= %d",i,a[i]);
}

}

