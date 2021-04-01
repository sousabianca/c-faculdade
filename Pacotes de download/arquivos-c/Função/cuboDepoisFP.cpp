#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
float cubo (float a); //prototipo de cubo
main (){
	setlocale(LC_ALL, "");
	float area, v;
	puts("Informe a área: ");
	scanf("%f", &area);
	v = cubo(area); // chamada da função
	printf("O volume do cubo de %f é: ",area,v);
}
//função depois da Função Principal
float cubo (float a){
	float c;
	c = pow(a,3);
	return(c);
}
