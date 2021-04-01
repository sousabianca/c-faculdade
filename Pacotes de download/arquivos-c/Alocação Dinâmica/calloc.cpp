#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
char *str; 
/* aloca memória para a string */
str = (char *) calloc(100, sizeof(char));
/* copia "Hello" em string */
strcpy(str, "O Flamengo venceu o corinthians por 5 X 1. Já é Campeão!!! .\n");
/* mostra string */
printf("\t\t A string de hoje e'\n %s\n", str);
/* libera memoria É SEMPRE CONVENIENTE EFETUAR A LIBERAÇÂO */
free(str);
system("pause");}
/* neste ponto para onde aponta str ??? */

