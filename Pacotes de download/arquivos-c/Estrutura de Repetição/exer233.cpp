#include <stdio.h>
#include <conio.h>

main ()
{
	int conta = 0, total = 0;
	while (conta<10){
		total += conta;
		printf("Conta = %d, total = %d \n", conta++, total);
		
	}
getche();
}
