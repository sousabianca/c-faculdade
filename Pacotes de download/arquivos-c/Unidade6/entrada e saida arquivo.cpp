#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main (void){
FILE *fp; 
char ch;
int nu;
fp=fopen("test.txt","w");
if(!fp)
{
    printf( "Erro na abertura do arquivo");
    getch();
    exit(0);
}
printf("Entre com os numeros para gravar e 0 para sair: \n");
scanf("%d",&nu);
                while(nu)
                {
                    fprintf(fp,"%d \n",nu);
                    scanf("%d",&nu);
                }
fclose(fp);
fp=fopen("test.txt","r");
               while(!feof(fp))
               {
               fscanf(fp,"%d ",&nu);
               printf("\n%d",nu);
               }
fclose(fp);
getch(); 
return (1);
}
