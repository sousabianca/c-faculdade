#include <stdio.h>
#include <conio.h>

float Vetor(int *Pa){
int i;
printf("\nImpressao na Funcao Vetor \n");
    for (i=0;i<10;i++)
    {       
     printf(" A[%d] = %d  ",i,Pa[i]);
     printf(" *(a + %d) = %d  \n",i,*(Pa+i));
    }
printf("\n");
return(*Pa);	
}


int main(){  	  
int i, Z;
int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
Z = Vetor(&A[0]);   // chamada a função a Pa = &A[0]
printf("\nImpressao na Funcao Main \n");
  for (i=0;i<10;i++)
    {
    printf("A[%d] = %d  ",i,A[i]);
    }  
printf("\n");
printf("Impressao de Z: Z =%d",Z);  
}

