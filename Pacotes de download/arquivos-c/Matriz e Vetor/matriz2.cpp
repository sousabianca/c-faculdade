#include <stdio.h>
#include <conio.h>

int main()
{
int i,total=0, j, A[3][3]={{5,2,4},{7,6,1},{2,3,1}};

printf("\n A Matriz A e' =:\n");
//***********impress�o da matriz********************
 for(i=0; i < 3; i++)
    { printf("i=%d",i);
        getch();
        for(j=0; j < 3; j++)
       {   printf("\ni=%d",i);
           printf("\nj=%d\n",j);
             printf("\tA[%d][%d] =  %d",i,j, A[i][j]);
              getch();
       }
       printf("\n");
       }
       
       for(i=0; i < 3; i++) 
    { printf("| ");
    for(j=0; j < 3; j++) 
       {
             printf(" %d ", A[i][j]);  
       }
       printf(" |\n");
       }
      // printf("\n\ntotal=%d",total);
 getch();}

