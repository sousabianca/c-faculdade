#include <stdio.h>
#include <conio.h>

main (){
	int x, *px; 
	float y, *py;
	x = 10;
	y = 1.2;
	
	px = &x; //inicialização do ponteiro px
	printf("*x= %d",*px);
	printf("\n&x = %p", &x);
	py = &y;
	printf("\n*y= %.2f", *py);
	printf("\n&y = %p", &y);
	// mudança de valor de forma indireta
	*px = 100; 
	printf("*x com valor mudado = %d",*px);
	*py = 50;
	printf("\n*y com valor mudado= %.2f", *py);
		
}
