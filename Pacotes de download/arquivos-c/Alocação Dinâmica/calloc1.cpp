#include <stdio.h>
#include <stdlib.h> 
main (){
int *p;
int a=20;
int i;/* Determina o valor de a em algum lugar */
p=(int *)calloc(a,sizeof(int)); /* Aloca a números
inteiros p pode agora ser tratado como um vetor com a posicoes*/
if (!p){
printf ("** Erro: Memoria Insuficiente **");
exit(0);}
for (i=0; i<a ; i++) /* p pode ser tratado como
um vetor com a posicoes */
{p[i] = i*i;
printf("%d \t %d \n",i,p[i]);}
system("pause");
return 0;}
