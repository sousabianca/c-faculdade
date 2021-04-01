#include <stdio.h>
#include <conio.h>

main() 
{
char string1[20];
char string2[] = " um vetor de caracteres";
int i;
printf("Digite uma string: \n");
//scanf("%s", &string1);
gets(string1);
printf("%s", string1);
printf("\n Imprima string2 com espacos entre palavras\n");
for (i = 0; string2[i] != '\0'; i++)
printf("%c", string2[i]);
printf("\n");
getch();
}

