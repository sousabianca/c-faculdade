#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main(){                    // programa principal
  	  float media2(float,float);    // prot�tipo de media2()
  	  float num_1, num_2, med;
  	  setlocale(LC_ALL, "");
  	  puts("Informe n1:");
  	  scanf("%f", &num_1);
  	  puts("Informe n2: ");
  	  scanf("%f", &num_2);
    med = media2(num_1, num_2);    // chamada a fun��o 
  	  printf("\nA m�dia de %f e %f �: %.2f",num_1,num_2, med);
}
float media2(float a, float b){  // fun��o media2()
	  float med;
	  med = (a + b) / 2.0;
	  return (med);
	} 

