#include <stdio.h>
#include <conio.h>

main(){
	
// a[i][j]	
int matrizA[2][2]= {{1,2},{3,4}}, matrizB [2][2]= {{1,2},{3,4}}, matrizS [2][2];
int i, j;


for(i=0; i<2; i++){ // for para linhas
	for(j=0;j<=1;j++) {
		matrizS[i][j] = matrizA [i][j] + matrizB [i][j];
	}
}
printf("\n");
 for(i=0; i < 2; i++) {
 	
  for(j=0; j < 2; j++) 
  {printf("\t  matriz soma [%d][%d]  ->  [%d]",i,j, matrizS[i][j]);}  
  printf("\n");}   
  
  getch();
}
