#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
char *str; 
/* aloca mem�ria para a string */
str = (char *) calloc(100, sizeof(char));
/* copia "Hello" em string */
strcpy(str, "O Flamengo venceu o corinthians por 5 X 1. J� � Campe�o!!! .\n");
/* mostra string */
printf("\t\t A string de hoje e'\n %s\n", str);
/* libera memoria � SEMPRE CONVENIENTE EFETUAR A LIBERA��O */
free(str);
system("pause");}
/* neste ponto para onde aponta str ??? */

