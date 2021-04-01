#include <stdio.h>
#include <conio.h>

int main()
{
int i, j, a[3][3];
FILE *fp; 
char ch;
int nu;
fp=fopen("matriz.txt","w+");
a[0][0]=1; a[0][1]=2; a[0][2]= 3; 
a[1][0]=4; a[1][1]=5; a[1][2]= 6;
a[2][0]=7; a[2][1]=8; a[2][2]= 9;

printf("\n A Matriz a e' =:\n");
//***********impressão da matriz em arquivo********
 for(i=0; i <=2; i++) 
  for(j=0; j <=2; j++) 
  fprintf(fp,"\n%d",a[i][j]);    
  
       fclose(fp);
//***********leitura da matriz em arquivo***********       
  fp=fopen("matriz.txt","r");
  for(i=0; i <=2; i++) 
  {
  for(j=0; j <=2; j++) 
     {fscanf(fp,"%d",&a[i][j]);
      printf("\n%d",a[i][j]);}
  }   
       fclose(fp);
      getch();

}
