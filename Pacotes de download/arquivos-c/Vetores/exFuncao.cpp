#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float media(float a, float b){
	float m;
	m = (a+b)/2.0;
	return(m);
}

main(){

	setlocale(LC_ALL, "");
	float n1, n2, med;
	puts("Digite n1: ");
	scanf("%f",&n1);
	puts("Digite n2: ");
	scanf("%f",&n2);
	med = media(n1,n2); // chamada da função
	printf("\na= %.2f + b %.2f med = %.2f",n1,n2,med);
	printf("\n A média é: %.2f",med);
	getch();
}
