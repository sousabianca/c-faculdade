#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include "volCubo.h"

main(){
	setlocale(LC_ALL, "");
	float volume, area;
	puts("Informe o valor da �rea: ");
	scanf("%f",&area);
	volume = cubo(area); //chamada da fun��o
	printf("O valor do cubo �: %.2f",volume);
}
