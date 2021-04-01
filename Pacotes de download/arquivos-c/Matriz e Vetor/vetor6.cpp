
#include <stdio.h>
#include <conio.h>

main() 
{
char string1[20];
char string2[] = {" Um vetor de caracteres sadfasda  asfasd asd adad asda"};
int i;
printf("Digite uma string: \n");
gets(string1);
printf("Imprimindo a string1:%s \n", string1);
puts(string1);
printf("\n Imprime a string2 com espacos entre palavras\n");

for (i = 0; string2[i] != '\0'; i++)
{printf("%c ", string2[i]);
getch();
}

getch();
}
