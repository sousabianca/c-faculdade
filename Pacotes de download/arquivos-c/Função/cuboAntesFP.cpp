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
	puts("Informe a área: ");
	scanf("%f", &area);
	v = cubo(area); // chamada da função
	printf("O volume do cubo é: %.2f",v);
}
