#include <stdio.h>
#include <conio.h>
//#include "MediaNum.h"

float med;
void Media(float a, float b) {  // fun��o
	  
	  med = (a + b) / 2.0;
	  printf("a = %f   b = %f  med = %f",a , b,med);

	  getch();

	}
main(){                    // programa principal
  	  float num_1, num_2;
  	  puts("Digite dois n�meros:");
  	  scanf("%f %f", &num_1, &num_2);
      Media(num_1, num_2);    // chamada da fun��o 
      printf("\nnum1 = %f   num2 = %f  med = %f",num_1 , num_2, med);
  	  printf("\nA media destes n�meros e� %f", med);
} 

