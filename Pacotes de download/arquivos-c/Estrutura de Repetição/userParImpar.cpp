#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()
{
int nimpar=1,npar=0 ,i=1, ac=0;
char user, resp;
setlocale(LC_ALL, "");
printf("Para pares digite (P) e �mpares (I): \n");
scanf("%c", &user);

do{

if ((user == 'p') || (user == 'P'))
{
	for (i=1; i<= 10; i++){
	ac = ac + npar;
	npar +=2;
	printf("\n %d� n�mero par: %d",i,npar);
}
}
else if ((user == 'i') || (user == 'I')){

	for (i=1; i<= 10; i++){
	ac = ac + nimpar;
	nimpar +=2;
	printf("\n %d� n�mero par: %d",i,nimpar);
}

}
printf("\n A soma de todos os n�meros �: %d", ac);
printf("\n Deseja continuar? Sim (S), N�o (N)");
}while((resp== 's')|| (resp=='S'));
getch();
}
