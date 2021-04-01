#include <stdio.h>
#include <math.h>
main()
 {
 //declaração da variável
  int i=0,j=0,k=0,z=0, a=0;  
  ++i;
  printf(" i= %d, \n\n",i);
  j++ ;
  printf(" j= %d, \n\n",j);
  --k;
  printf(" k= %d, \n\n",k);
  z-- ;
  printf(" z= %d, \n\n",z);
  
   printf("*************************\n");
  // zerando as variáveis
  i=0;j=0;k=0;z=0; 
  a=++i;
  printf(" i= %d,\t a=%d\n\n",i,a);
  a=0;
  a=j++ ;
  printf(" j= %d,\t a=%d\n\n",j,a);
  a=0;
  a=--k;
  printf(" k= %d,\t a=%d\n\n",k,a);
   a=0;
  a=z-- ;
  printf(" z= %d,\t a=%d\n\n",z,a);
 

}
