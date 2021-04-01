#include <stdio.h>
#include <conio.h>

int main()
{
int Acc, Media, L,total=0, C, A[3][4]={{5,6,6,5},{7,6,9,10},{5,6,4,5}};
 
Acc = 0;
//************Construção da matrLz*******************
//MatrLz_A[0][0]=5; MatrLz_A[0][1]=2; MatrLz_A[1][0]=7; MatrLz_A[1][1]=6;

printf("\n A MatrLz A e' =:\n");
//***********Lmpressão da matrLz********************
 for(L=0; L < 3; L++) 
     { 
      printf("| ");
	for(C=0; C < 4; C++) 
       {
           //   total=total+A[L][C];
       printf("  %d ", A[L][C]); 
	   Acc = Acc + A[L][C]; 
	       }
       printf("|\n");
       }
       printf("\n\ntotal=%d",Acc);
       Media = Acc /12;
              printf("\n\n Media da turma total=%d",Media);
 getch();} 
 
