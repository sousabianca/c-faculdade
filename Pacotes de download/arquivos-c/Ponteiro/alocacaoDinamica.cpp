#include <stdio.h>
#include <stdlib.h>
main()
{
int *p, t,a;
printf("Entre com o tamanho do vetor a ser criado:  ");
scanf("%d",&a);
//p=(int *) malloc(a*4);
p=(int *) malloc(a*sizeof(int));
if (!p)
   printf("memoria insuficiente\n");
else
    printf("\n O vetor criado:  ");
    {
    for(t=0;t<a;t++)  *(p+t)=t+2;
    for(t=0;t<a;t++)   printf("%d ",*(p+t));
    free(p);
p =&a;
        printf("\n\n O endereco do 1o. elemento e': %p",(p+0));
        a=a-1;
        printf("\n\n O endereco do u'ltimo elemento e'%p \n\n",(p+a-1));
// E8 + 39*4 => 488CE8+9C => 488D84
    system("pause");
    }
}

