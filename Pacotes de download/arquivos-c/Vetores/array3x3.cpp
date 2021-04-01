#include <stdio.h>
#include <conio.h>

main (){
	int matriz [3][3] = {{1,2,3}, {4,5,6},{7,8,9}}, i, j;
	for (i=0; i<3; i++){
		
		for(j=0; j<3; j++)
			{printf("\n O elemento da linha %d e da coluna %d = %d ", i,j,matriz[i][j]);}
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
