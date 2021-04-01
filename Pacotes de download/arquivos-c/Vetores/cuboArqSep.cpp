#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include "volCubo.h"

main(){
	setlocale(LC_ALL, "");
	float volume, area;
	puts("Informe o valor da área: ");
	scanf("%f",&area);
	volume = cubo(area); //chamada da função
	printf("O valor do cubo é: %.2f",volume);
}
