#include <stdio.h>
#include <conio.h>
#define TAM 20

int main()
{
 char letras[TAM];
 int i;
 printf("Entre com a frase: ");
 
 gets(letras);
// for(i= 0; i < TAM; i++)
// {scanf("%c", &letras[i]); }
// IMPRIME A FRASE NA ORDEM CORRETA -> for(i= 0; i > TAM; i++)

// IMPRIME A FRASE NA ORDEM INVERSA
for(i= TAM-1; i>=0; i--)
{printf("%c", letras[i]);
getch();}
printf("\n");
return (0);
}

/*
1- Fazer um programa para um vetor com os respectivos valores: 
a[0]=1;   a[1]=2;   a[2]=3;   a[3]=4
2- Fazer um programa para um vetor com 6 elementos com os valores sendo digitados pelo usuário: 
4-  Fazer um programa para somar dois vetores ‘a’ e ‘b’ com 5 elementos declarados.
	a) somando os elementos um a um (a[1]+b[1]... a[n] + b[n].) 
	b) utilizando o comando FOR para fazer a soma de todos os elementos seqüencialmente. 

*/
#include <stdio.h>
#include <conio.h>
# define X 5

main()
{
int i, a[X], b[X], Soma = 0	;
	for (i = 0 ; i<X; i++) 
	{
	printf ("\n Entre com o elemento de indice %d dos vetores A e B: ", i);
	scanf("%d %d", &a[i],&b[i]);
	Soma =  Soma + a[i] + b[i];
	}
	
	for (i = 0 ; i<X; i++) 	 
	{
	printf ("A[%d] = %d \n", i, a[i]);
	printf ("B[%d] = %d \n", i, b[i]);	
	}
	
	printf( "A soma dos elementos dos dois vetores e': %d", Soma);
}

