// Bibliotecas das fun��es e vari�veis.
  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define SIZE 9999


// Declara��o das vari�veis globais.

char nome 		[SIZE][50];
char projeto 	[SIZE][50];
char login 		[SIZE][50];
char senha		[SIZE][50];
char email 		[SIZE][50];
char cpf 		[SIZE][50];
float dinheiro;
int causa;

char dados[SIZE]; //est� sendo usado na fun��o lista



    FILE *pont_arq;  // Cria uma variavel ponteiro para o arquivo (GLOBAL)
    

// Declara��o das vari�veis do lado de decis�o SWITCH...CASE.

void cadastro();
void lista();

int op;


// In�cio do programa.

// Aqui se encontra a �rea de menu, aonde vamos chamar as fun��es dentro do switch case.

 int main (void)
{

setlocale(LC_ALL, "Portuguese"); // HABILITA ACENTUA��O JUNTO COM A BIBLIOTECA LOCALE.H.




// In�cio do la�o de repeti��o DO...WHILE.
	
do{
 system("cls"); // Sua funs�o � limpar a tela de sa�da de programa que � executado no MS-DOS, ou seja, funciona como um "apagador" para tudo que j� foi escrito. Necessita da biblioteca stdlib.h.
		 
		 // Entrada de dados .
		 
		 // Impress�o do menu.
		 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~\tMENU\t\t\t\t\t~~~~~\n~~~~~\t1 - Cadastrar o Usu�rio\t\t\t~~~~~\n~~~~~\t2 - Listar todos os Projetos\t\t~~~~~\n~~~~~\t3 - Sair \t\t\t\t~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		 
		 // Leitura da escolha.
		 scanf("%d", &op);
		 
		 system("cls"); 
		 // Sa�da de dados.
		 
		 // In�cio do la�o de decis�o SWITCH...CASE. Para a chamada das fun��es criadas.
		 
		switch (op){
			case 1:
				cadastro();
				break;
			case 2:
				lista();
				break;
			case 3:
				system("exit");
				break;
			default:
				printf("Alternativa errada !");// Impress�o de erro.
				getchar();
				getchar();
				break;		
				
		}// Fim do la�o de decis�o SWITCH...CASE.
			
	}while (op!=3);// Fim do la�o de repeti��o DO...WHILE.
	// Fim do programa

}

// In�cio da fun��o Cadastro.

    void cadastro (){ // Aqui foi feita a area de cadastro do usuario, onde serao inseridos todos os dados.	 
    
	// Declara��o das vari�veis. 
	int i;
	
	do {  											// In�cio do la�o de repeti��o DO...WHILE.
		
		pont_arq = fopen ("DadosCliente.txt", "a"); // Criando um arquivo de abertura "a" ( faz com que os dados nao sumam quando o programa � fechado ), vai armazenar os dados dos clientes em um bloco txt.
			
			// Fim do la�o de desi��o IF...ELSE.
			
			if (pont_arq == NULL) 
			{
				// Impress�o de erro.
				//Caso d� algum erro para criar o arquivo txt, o programa n�o executa e entra no printf informando que ocorreu algum erro
				
printf("ERRO NA ABERTURA DO ARQUIVO TXT !!");
getchar();
} else 

{
		    				
printf ("Digite seu nome completo: "); // Cadastrando o Nome completo do usuario.
scanf(" %[^\n]s", &nome);//  %[^\n]s serve para armazenar string com espa�os ! 
fprintf(pont_arq, "Nome: %s\n", nome); 	//o comando fprintf serve para armazenar a string no arquivo criado.
			
printf ("\nDigite seu CPF completo: "); // Cadastrando o CPF do usuario.
scanf ("%s", &cpf);// Leitura da vari�vel.
fprintf(pont_arq, "CPF: %s\n", cpf);
			
printf("\nDigite seu Email para contato: "); // Cadastrando o Email.
scanf ("%s", &email);// Leitura da vari�vel.
fprintf(pont_arq, "Email: %s\n", email);
			
printf ("\nDigite um Login de acesso: "); // Cadastrando o Login.
scanf("%s", &login);// Leitura da vari�vel.
fprintf(pont_arq, "Login: %s\n", login);
			


printf ("\nDigite uma senha: ");// Cadastrando a Senha.
scanf("%s", &senha);// Leitura da vari�vel.
fprintf(pont_arq, "Senha: %s\n", senha);
			
printf("\nPra qual Causa voce deseja arrecadar fundos ?\n(1)Causa Ambiental\n(2)Roupas/Alimento\n(3)Resgate e Moradia para Animais Abandonados\n\n"); // Impress�o dos dados.
scanf("%d", &causa); // Leitura da vari�vel.
			
			// Fim do la�o de decis�o SWITCH...CASE.
			
			
			switch (causa)
			{
				case 1: 
fprintf(pont_arq, "Tipo do Projeto: Causa Ambiental\n", op);
printf("\nConte para a gente como vai ser o seu projeto: ");// Impress�o dos dados.
scanf (" %[^\n]s", &projeto);// Leitura da vari�vel.
fprintf(pont_arq, "Projeto: %s\n", projeto);
printf("\nQuanto deseja arrecadar para realizar seu projeto ?\nR$");// Impress�o dos dados.
scanf("%f", &dinheiro);// Leitura da vari�vel.
fprintf(pont_arq, "Dinheiro para o Projeto: R$%.2f\n", dinheiro);
break;

				case 2:
fprintf(pont_arq, "Tipo do Projeto: Roupas/Alimento\n", op);
printf("\nConte para a gente como vai ser o seu projeto: ");// Impress�o dos dados.
scanf (" %[^\n]s", &projeto);// Leitura da vari�vel.
fprintf(pont_arq, "Projeto: %s\n", projeto);
printf("\nQuanto deseja arrecadar para realizar seu projeto ?\nR$");// Impress�o dos dados.
scanf("%f", &dinheiro);// Leitura da vari�vel.
fprintf(pont_arq, "Dinheiro para o Projeto: R$%.2f\n", dinheiro);
break;












				case 3:
fprintf(pont_arq, "Tipo do Projeto: Resgate e Moradia para Animais Abandonados\n", op);
printf("\nConte para a gente como vai ser o seu projeto: ");// Impress�o dos dados.
scanf (" %[^\n]s", &projeto);// Leitura da vari�vel.
fprintf(pont_arq, "Projeto: %s\n", projeto);
printf("\nQuanto deseja arrecadar para realizar seu projeto ?\nR$");// Impress�o dos dados.
scanf("%f", &dinheiro);// Leitura da vari�vel.
fprintf(pont_arq, "Dinheiro para o Projeto: R$%.2f\n", dinheiro);
break;

				default:
printf("\nAlternativa incorreta");// Impress�o dos dados.
getchar();
break;
					
			}// Fim do la�o de decis�o SWITCH...CASE.
fprintf(pont_arq, "------------------------\n");
			// Sa�da de dados.
printf("\nDigite 1 para continuar ou outro valor para sair: ");// Impress�o dos dados.
scanf("%d", &op);// Leitura da vari�vel.
			
fclose(pont_arq);
		}// Fim do la�o de decis�o IF...ELSE.
			
} while (op==1);// Fim do la�o de repeti��o DO...WHILE.

}// Fim do programa.


 // In�cio da fun��o Lista.
 
void lista ()
{
	// Declara��o das vari�veis.
	int i=0;
	
	    // In�cio do la�o de repeti��o FOR.
	    pont_arq = fopen ("DadosCliente.txt", "r");
	    if (pont_arq == NULL){

printf("ERRO NA ABERTURA DO ARQUIVO");
return;
				}




while (fgets(dados, 100, pont_arq) != NULL){ //tive que fazer com o la�o while, porq no arquivo existe quebras de linhas

printf("%s", dados);						//sem o while, ele ia s� ia ler a primeira linha e parar o programa, pois existe um \n
    
  		}
  		fclose(pont_arq);
		getchar();
		getchar();
		
    
}// Fim da fun��o Lista.

