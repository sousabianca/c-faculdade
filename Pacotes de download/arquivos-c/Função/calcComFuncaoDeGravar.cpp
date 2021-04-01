#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

 main ()
{

char tipo;
float a,b,x;
setlocale(LC_ALL, "");
puts("Selecione a operação matemática:");
puts("(+) Soma;\n(-) Subtrao;\n(*)Multiplicação;\n(/)Divisão\n:");
FILE *fp;
fp = fopen("calculadora.txt","w");
if(!fp)
 {
    printf( "Erro na abertura do arquivo");
    exit(0);
 }
//tipo = getchar();
//tipo = getch();
scanf("%c",&tipo);
switch(tipo)
{
case '+': 
     puts("Informe n1: ");
     scanf("%f",&a);
     puts("Informe n2: ");
     scanf("%f",&b); 
     x=a+b;
     
     
    break;

// Subtração
case '-':
     puts("Informe n1: ");;
     scanf("%f",&a);
     puts("Informe n2: ");
     scanf("%f",&b); 
     x=a-b;
    break;

//Multiplicação
case '*':
     puts("Informe n1: ");
     scanf("%f",&a);
     puts("Informe n2: ");
     scanf("%f",&b); 
     x=a*b;    
    break;

//Divisão
case '/':
     puts("Informe n1: ");
     scanf("%f",&a);
     puts("Informe n2 ");
     scanf("%f",&b); 
     x=a/b;
    break;
    
default:
  puts("Opcao incorreta");
}
printf("%.2f %c %.2f = %.2f",a,tipo,b,x);
fprintf(fp,"%.2f %c %.2f = %.2f",a,tipo,b,x);

fclose(fp);
getch();
}
