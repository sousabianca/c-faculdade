#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL, "");
int n=1, i=1, ac=0 ; // se eu quiser fazer com nº ímpares basta colocar n = 1
do
{
	printf("\n %dº número par: %d",i,n);
	ac = ac + n;
	n += 2;
	i++;
}
while (i <=10);
printf("\n Soma: %d",ac);
getch();	
}
