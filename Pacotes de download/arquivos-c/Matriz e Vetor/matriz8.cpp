#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i, j, Matriz[3][3],S=0;

/**********constru��o da matriz**********************/
   printf("entre com os valores da matriz 3X3\n"); 
for(i=0; i < 3; i++) 
   {
    for(j=0; j < 3; j++)
      {
       scanf("%d",&Matriz[i][j]);
      }
    }
/**********impress�o da matriz**********************/
   printf("\nOs valores da matriz 3X3 sao:\n "); 
      printf("\n\t  Linha\t Coluna\t  valor  ");  
 for(i=0; i < 3; i++) 
   {
   for(j=0; j < 3; j++) 
     {
      printf("\n\t  Mat[%d][%d]  ->  %d",i,j, Matriz[i][j]);
      }
   }
      /**********impress�o da linha principal matriz**********************/
      printf("\n\n Os valores da linha principal da matriz 2X2 e:\n"); 
    for(i=0; i < 3; i++) 
   {
     for(j=0; j < 3; j++) 
     {
      if (i==j)
      printf("\n\n\t  i= %d    j=%d  ->  [%d]",i,j, Matriz[i][j]);
      S=S+Matriz[i][j];}
   }
getch();
 }  
 
 
