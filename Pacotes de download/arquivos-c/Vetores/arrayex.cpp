#include <stdio.h>
#include <conio.h>

main(){
	
// a[i][j]	
int matriz[2][2]= {{5,2},{7,6}};
int l, c;

/*a[0][0]=5; 
a[0][1]=2;
a[1][0]=7; 
a[1][1]=6;*/

for(l=0; l<2; l++){ // for para linhas
	for(c=0;c<=1;c++) {
		printf("\n O elemento da linha %d e da coluna %d = %d ", l,c,matriz[l][c]);
	}
}

}
