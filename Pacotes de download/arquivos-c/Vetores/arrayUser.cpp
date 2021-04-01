#include <stdio.h>
#include <conio.h>

main (){
	int matriz [3][3];
	int i, j;
	printf("Entre com os elementos da matriz: ");
	
	for(i=0;i<3; i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
 printf("\n");
 for(i=0; i < 3; i++) 
    { printf("  | ");
    for(j=0; j < 3; j++) 
       {
             printf(" %d ", matriz[i][j]);  
       }
       printf(" |\n");
       }
	
	
}
