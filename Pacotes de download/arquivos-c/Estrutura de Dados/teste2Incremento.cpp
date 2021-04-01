#include <stdio.h>
#include <math.h>
main()
 {
 //declaração da variável
 int a=0, b=0, c=0, i = 3;     // a: 0   b: 0   c: 0   i: 3
a = i++;  
printf("++ a Direita \ta= %d, i= %d, \n\n",a,i);
 
i=3; 
b = ++i;                
printf("++ a Esquerda \t b= %d, i= %d, \n\n",b,i);   
 
i=3;
c = i--;               
printf("-- a Direita \t c= %d, i= %d, \n\n",c,i);          
 
i=3;
c = --i;               
printf("-- a Esquerda \t c= %d, i= %d, \n\n",c,i);          
  }

