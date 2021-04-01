#include <stdio.h>
#include <conio.h>
#define x 5

main (){
	int i, a[x];
	
	for(i=0;i<x;i++){
		printf("Informe os valores do vetor %d: ",i);
		scanf("%d",&a);	
	}
	for(i=0; i<x; i++)
	{printf("\n vetor[%d] = %d", i, a[i]);}
}


