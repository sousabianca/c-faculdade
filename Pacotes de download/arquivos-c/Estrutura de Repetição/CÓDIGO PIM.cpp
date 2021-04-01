// Bibliotecas das funções e variáveis.
  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define SIZE 9999


// Declaração das variáveis globais.

char nome 		[SIZE][50];
char projeto 	[SIZE][50];
char login 		[SIZE][50];
char senha		[SIZE][50];
char email 		[SIZE][50];
char cpf 		[SIZE][50];
float dinheiro;
int causa;

char dados[SIZE]; //está sendo usado na função lista



    FILE *pont_arq;  // Cria uma variavel ponteiro para o arquivo (GLOBAL)
    

// Declaração das variáveis do lado de decisão SWITCH...CASE.

void cadastro();
void lista();

int op;


// Início do programa.

// Aqui se encontra a Área de menu, aonde vamos chamar as funções dentro do switch case.

 int main (void)
{

setlocale(LC_ALL, "Portuguese"); // HABILITA ACENTUAÇÃO JUNTO COM A BIBLIOTECA LOCALE.H.




// Início do laço de repetição DO...WHILE.
	
do{
 system("cls"); // Sua funsão é limpar a tela de saída de programa que é executado no MS-DOS, ou seja, funciona como um "apagador" para tudo que já foi escrito. Necessita da biblioteca stdlib.h.
		 
		 // Entrada de dados .
		 
		 // Impressão do menu.
		 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~\tMENU\t\t\t\t\t~~~~~\n~~~~~\t1 - Cadastrar o Usuário\t\t\t~~~~~\n~~~~~\t2 - Listar todos os Projetos\t\t~~~~~\n~~~~~\t3 - Sair \t\t\t\t~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		 
		 // Leitura da escolha.
		 scanf("%d", &op);
		 
		 system("cls"); 
		 // Saída de dados.
		 
		 // Início do laço de decisão SWITCH...CASE. Para a chamada das funções criadas.
		 
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
				printf("Alternativa errada !");// Impressão de erro.
				getchar();
				getchar();
				break;		
				
		}// Fim do laço de decisão SWITCH...CASE.
			
	}while (op!=3);// Fim do laço de repetição DO...WHILE.
	// Fim do programa

}

// Início da função Cadastro.

    void cadastro (){ // Aqui foi feita a area de cadastro do usuario, onde serao inseridos todos os dados.	 
    
	// Declaração das variáveis. 
	int i;
	
	do {  											// Início do laço de repetição DO...WHILE.
		
		pont_arq = fopen ("DadosCliente.txt", "a"); // Criando um arquivo de abertura "a" ( faz com que os dados nao sumam quando o programa é fechado ), vai armazenar os dados dos clientes em um bloco txt.
			
			// Fim do laço de desição IF...ELSE.
			
			if (pont_arq == NULL) 
			{
				// Impressão de erro.
				//Caso dê algum erro para criar o arquivo txt, o programa não executa e entra no printf informando que ocorreu algum erro
				
printf("ERRO NA ABERTURA DO ARQUIVO TXT !!");
getchar();
} else 

{
		    				
printf ("Digite seu nome completo: "); // Cadastrando o Nome completo do usuario.
scanf(" %[^\n]s", &nome);//  %[^\n]s serve para armazenar string com espaços ! 
fprintf(pont_arq, "Nome: %s\n", nome); 	//o comando fprintf serve para armazenar a string no arquivo criado.
			
printf ("\nDigite seu CPF completo: "); // Cadastrando o CPF do usuario.
scanf ("%s", &cpf);// Leitura da variável.
fprintf(pont_arq, "CPF: %s\n", cpf);
			
printf("\nDigite seu Email para contato: "); // Cadastrando o Email.
scanf ("%s", &email);// Leitura da variável.
fprintf(pont_arq, "Email: %s\n", email);
			
printf ("\nDigite um Login de acesso: "); // Cadastrando o Login.
scanf("%s", &login);// Leitura da variável.
fprintf(pont_arq, "Login: %s\n", login);
			


printf ("\nDigite uma senha: ");// Cadastrando a Senha.
scanf("%s", &senha);// Leitura da variável.
fprintf(pont_arq, "Senha: %s\n", senha);
			
printf("\nPra qual Causa voce deseja arrecadar fundos ?\n(1)Causa Ambiental\n(2)Roupas/Alimento\n(3)Resgate e Moradia para Animais Abandonados\n\n"); // Impressão dos dados.
scanf("%d", &causa); // Leitura da variável.
			
			// Fim do laço de decisão SWITCH...CASE.
			
			
			switch (causa)
			{
				case 1: 
fprintf(pont_arq, "Tipo do Projeto: Causa Ambiental\n", op);
printf("\nConte para a gente como vai ser o seu projeto: ");// Impressão dos dados.
scanf (" %[^\n]s", &projeto);// Leitura da variável.
fprintf(pont_arq, "Projeto: %s\n", projeto);
printf("\nQuanto deseja arrecadar para realizar seu projeto ?\nR$");// Impressão dos dados.
scanf("%f", &dinheiro);// Leitura da variável.
fprintf(pont_arq, "Dinheiro para o Projeto: R$%.2f\n", dinheiro);
break;

				case 2:
fprintf(pont_arq, "Tipo do Projeto: Roupas/Alimento\n", op);
printf("\nConte para a gente como vai ser o seu projeto: ");// Impressão dos dados.
scanf (" %[^\n]s", &projeto);// Leitura da variável.
fprintf(pont_arq, "Projeto: %s\n", projeto);
printf("\nQuanto deseja arrecadar para realizar seu projeto ?\nR$");// Impressão dos dados.
scanf("%f", &dinheiro);// Leitura da variável.
fprintf(pont_arq, "Dinheiro para o Projeto: R$%.2f\n", dinheiro);
break;












				case 3:
fprintf(pont_arq, "Tipo do Projeto: Resgate e Moradia para Animais Abandonados\n", op);
printf("\nConte para a gente como vai ser o seu projeto: ");// Impressão dos dados.
scanf (" %[^\n]s", &projeto);// Leitura da variável.
fprintf(pont_arq, "Projeto: %s\n", projeto);
printf("\nQuanto deseja arrecadar para realizar seu projeto ?\nR$");// Impressão dos dados.
scanf("%f", &dinheiro);// Leitura da variável.
fprintf(pont_arq, "Dinheiro para o Projeto: R$%.2f\n", dinheiro);
break;

				default:
printf("\nAlternativa incorreta");// Impressão dos dados.
getchar();
break;
					
			}// Fim do laço de decisão SWITCH...CASE.
fprintf(pont_arq, "------------------------\n");
			// Saída de dados.
printf("\nDigite 1 para continuar ou outro valor para sair: ");// Impressão dos dados.
scanf("%d", &op);// Leitura da variável.
			
fclose(pont_arq);
		}// Fim do laço de decisão IF...ELSE.
			
} while (op==1);// Fim do laço de repetição DO...WHILE.

}// Fim do programa.


 // Início da função Lista.
 
void lista ()
{
	// Declaração das variáveis.
	int i=0;
	
	    // Início do laço de repetição FOR.
	    pont_arq = fopen ("DadosCliente.txt", "r");
	    if (pont_arq == NULL){

printf("ERRO NA ABERTURA DO ARQUIVO");
return;
				}




while (fgets(dados, 100, pont_arq) != NULL){ //tive que fazer com o laço while, porq no arquivo existe quebras de linhas

printf("%s", dados);						//sem o while, ele ia só ia ler a primeira linha e parar o programa, pois existe um \n
    
  		}
  		fclose(pont_arq);
		getchar();
		getchar();
		
    
}// Fim da função Lista.

