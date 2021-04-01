#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
setlocale(LC_ALL, "");
int i, x, ac=0;

if ((x%1 == 0)|| (x%x == 0)){
	for (i=1; i<= 10; i++){
	ac = ac + x;
	x +=2;
	printf("\n %dº número par: %d",i,x);
}
}

printf("\nA soma de todos os números é: %d", ac);
getch();
}
