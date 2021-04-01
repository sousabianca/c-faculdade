#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main(){                    // programa principal
  	  float media2(float,float);    // protótipo de media2()
  	  float num_1, num_2, med;
  	  setlocale(LC_ALL, "");
  	  puts("Informe n1:");
  	  scanf("%f", &num_1);
  	  puts("Informe n2: ");
  	  scanf("%f", &num_2);
    med = media2(num_1, num_2);    // chamada a função 
  	  printf("\nA média de %f e %f é: %.2f",num_1,num_2, med);
}
float media2(float a, float b){  // função media2()
	  float med;
	  med = (a + b) / 2.0;
	  return (med);
	} 

