#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>


main()
{
   float VL, Vo, a, DS, S, So;
setlocale(LC_ALL, "Portuguese");
printf("* Cálculo de velocidade final *\n"); 
printf("Entre com o valor de Vo:");
  scanf("%f", &Vo);

printf("\n Entre com o valor de a:");
  scanf("%f", &a);	
  	 
printf("\n Entre com o valor de S:");
  scanf("%f", &S);	
  
printf("\n Entre com o valor de So:");
  scanf("%f", &So);
  
DS=(S - So);
  
VL= sqrt(Vo*Vo + 2*a *DS);
printf("\n A velocidade final e: %.2f ", VL);
getch();	
}
