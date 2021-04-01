#include <stdio.h>
#include <conio.h>

main (){
	int a[2][2] = {{5,2},{7,6}}, i, j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n O elemento da linha %d e da coluna %d = %d ", i,j,a[i][j]);
		}
	}
	printf("\n");
 	for(i=0; i < 2; i++) 
    	{ printf("  | ");
    for(j=0; j < 2; j++) 
       {
             printf(" %d ", a[i][j]);  
       }
       printf(" |\n");
       }
}
