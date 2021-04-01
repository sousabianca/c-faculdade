#include <stdio.h>
#include <conio.h>
#define M 10
#define N 10
int main()
{
int i, j, m, n, Matriz[M][N];

printf("Entre com o numero de linhas da Matriz \n");
printf("- No maximo 10 linhas \n");
scanf("%d",&m);
printf("Entre com o numero de colunas da Matriz \n");
printf("-No maximo 10 colunas \n");
scanf("%d",&n);

//************Construção da matriz*******************

printf("Entre com os numeros da matriz %d x %d\n",m,n);
for(i=0; i < m; i++) 
   for(j=0; j < n; j++)
   scanf("%d",&Matriz[i] [j]); 
      printf("\n\t  Linha\t Coluna\t  valor  ");  

//***********impressão da matriz********************
 for(i=0; i < m; i++) 
  for(j=0; j < n; j++) 
      printf("\n\t  Mat[%d][%d]  ->  %d",i,j, Matriz[i][j]);  
       getch();
       }  
 
