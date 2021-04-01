#include <stdio.h>
#include <conio.h>

int main()
{
int i=0,c[5]={2,31,1,3,7};
char string[]= {"Pedro caRlos"};

printf("imprimindo o vetor c: ");
for(i=0;i<5;i++)
     {
       //scanf("%d",&c[i]);
       printf("\n\t c[%d]=%d",i, c[i]);
       getch();
     }
      
getch();
}
