#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main ()
{
int i=1,n=0;
float raiz;
do {
	
	raiz = sqrt(n);
	printf("%dº= %.2f \n",i,n);
	n += 2;
	i++;
}
while(i<=50);
getch();
}

