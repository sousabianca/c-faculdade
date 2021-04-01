#include <stdio.h>
#include <stdlib.h>
main(){
float *p;
int t;
p=(float *) malloc(160);
if (!p)
   printf("memoria insuficiente\n");
else
  { for(t=0;t<40;t++) 
    *(p+t)=t;
    for(t=0;t<40;t++) 
    printf("\n %p = %.2f ",(p+t),*(p+t));
    free(p);
    printf("\n");
    system("pause");    } }
