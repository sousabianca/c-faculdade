#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
int i;
float raiz;
setlocale(LC_ALL, "");
for (i=0; i<=50; i++)
{
	raiz = sqrt(i);
	printf("%dº= %d \n",i,raiz);
}
getch();
}
