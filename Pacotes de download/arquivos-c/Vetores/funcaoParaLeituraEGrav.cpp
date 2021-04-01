#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


main (){
int i =1;
float x;
FILE * fp;
fp = fopen("vetor.txt", "w");
if(!fp)
{
    printf( "Erro na abertura do arquivo");
    exit(0);
}

do{
	x = sqrt(i);
	printf("%.2f\n",x);
	i += 2;
	fprintf(fp, "%.2f\n",x);
}	
while(i<=50);
fclose(fp);
printf("\n");
system("PAUSE");	
}
