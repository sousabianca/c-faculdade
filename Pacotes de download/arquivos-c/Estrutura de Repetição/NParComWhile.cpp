#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL, "");
int n=0, i=1, ac=0 ;
while (i <=10)
{
	printf("\n %dº número par: %d",i,n);
	ac = ac + n;
	n += 2;
	i++;
}
printf("\n Soma: %d",ac);
getch();
}
