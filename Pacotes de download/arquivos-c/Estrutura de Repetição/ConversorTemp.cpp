#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
float i,c,f, k;
char tiptemp, resp;
setlocale(LC_ALL, "");
printf("Digite F para converter em Fahrenheit, C para Celsius e K para Kelvin: ");
scanf(" %c", &tiptemp);

do {

if (tiptemp == 'C' || tiptemp == 'c')
{
	for(i=0; i<=100; i++){
		
		c = ((i-32) * 5.0/9.0);
		printf("%f C = %f F \n",c,i);
	}
}
else if (tiptemp == 'F' || tiptemp == 'f'){
	for(i=0; i<=100; i++){
		f =  (9.0/5.0) * i  + 32;
		printf("%.2f F = %.2f C \n",f,i);
}	

}
else if (tiptemp == 'K' || tiptemp == 'k'){
	for(i=0; i<=100; i++){
		k = c + 237;
		printf("%.2f K = %.2f C \n",k,i);
}	

}
else ("Opção inválida!");
printf("Deseja continuar: Sim (s) Não (N)\n");
scanf("%c", &resp);
} while ((resp == 's') || (resp == 'S'));
getch();
}

