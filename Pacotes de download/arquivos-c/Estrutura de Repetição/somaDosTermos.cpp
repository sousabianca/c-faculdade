#include <stdio.h>
#include <conio.h>
#include <locale>

main ()
{
int i,x=5, ac=0;
setlocale(LC_ALL, "");
for (i=1;i<=10;i++){
	printf("\n %dº número : %d",i,x);
	ac+=x;
	x+= 6;
	
}
printf("\nA soma de todos os números é: %d", ac);
}
