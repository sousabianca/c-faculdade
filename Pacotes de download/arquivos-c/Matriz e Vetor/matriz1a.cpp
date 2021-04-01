#include <stdio.h>
#include <conio.h>

int main()
{
int i,total=0, j, A[2][2]={{5,2},{7,6}};

printf("\n A Matriz A e' =:\n");
//***********impressão da matriz********************
 for(i=0; i < 2; i++) 
    { printf("  | ");
    for(j=0; j < 2; j++) 
       {
             printf(" %d ", A[i][j]);  
       }
       printf(" |\n");
       }
      // printf("\n\ntotal=%d",total);
 getch();} 
 
