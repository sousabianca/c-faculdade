#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main (){
FILE *fp;  /* Definido em stdio.h  - Cont�m um ponteiro para o buffer e um ponteiro para a posi��o corrente dele
           Notar que a vari�vel de arquivo � apenas um ponteiro. A estrutura a ser apontada e o Buffer ser�o alocados,
           De fato, somente no momento em que o arquivo for aberto.*/
char ch;
int nu;

/*A abertura de arquivo � a opera��o que estabelece a conex�o ente o programa
na mem�ria e o arquivo residente em disco. � durante a abertura de
arquivo que a estrutura do tipo FILE e o buffer de transfer�ncia de dados que
ela aponta s�o alocados. Para abrir um arquivo precisamos de uma instru��o
da seguinte forma:
a = fopen("nome","modo"); 
sendo que:
�  a � uma vari�vel cujo valor ser� o endere�o da estrutura alocada para
representar o arquivo ou NULL, caso o arquivo n�o possa ser aberto;
�  nome especifica o nome pelo qual o arquivo � referenciado em disco;
�  modo especifica se o arquivo ser� lido (r) ou gravado (w).
*/

fp=fopen("teste2.txt","w");
printf("Entre com os numeros para gravar e 0 para sair: \n");
scanf("%d",&nu);
while(nu){
          
/* As fun��es scanf() e printf() s�o id�nticas �s fun��es fscanf() e fprintf()
   exceto pelo fato de exigirem como primeiro argumento um ponteiro de arquivo.
   A sa�da de fprintf() n�o � a tela, mas um arquivo.
   fscanf() n�o l� do teclado, mas sim de um arquivo.
*/
   
fprintf(fp,"%d \n",nu);
scanf("%d",&nu);}

/*Depois de usado um arquivo, precisamos fech�-lo. O fechamento de um arquivo
� importante por dois motivos:
1o se o arquivo foi aberto para grava��o e o buffer n�o foi completamente preenchido,
o fechamento garante que ele seja descarregado em disco.
2o o fechamento libera a �rea de conex�o alocada na abertura do arquivo.
Para fechar um arquivo espec�fico, usamos uma instru��o da forma fclose(a),
onde a � o ponteiro para esse arquivo. Para fechar todos os arquivos abertos,
de uma s� vez, usamos a fun��o fcloseall(), que n�o requer argumentos.*/

fclose(fp);
fp=fopen("teste2.txt","r");
while(!feof(fp)){
fscanf(fp,"%d ",&nu);
printf("\n%d",nu);}
getch(); }



