#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float cubo (float a){
	float c;
	c = pow(a,3);
	return(c);
}

main (){
	setlocale(LC_ALL, "");
	float area, v;
	puts("Informe a �rea: ");
	scanf("%f", &area);
	v = cubo(area); // chamada da fun��o
	printf("O volume do cubo �: %.2f",v);
}
