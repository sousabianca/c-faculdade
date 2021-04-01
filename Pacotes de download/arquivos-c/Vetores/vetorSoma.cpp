#include <stdio.h>
#include <conio.h>
#include <locale.h>

main (){
	int i, a[5] = {1,2,3,4,5};
	int b [5] = {1,2,3,4,5};
	int acc = 0;
	setlocale(LC_ALL, "");
	
	for(i=0; i<5;i++){
		acc = a[i] +  b [i];
		printf("\ A soma dos elementos de A[%d] + B[%d] = %d \n",a[i], b[i],acc);
	}
}
