#include <stdio.h>
#include <conio.h>
#define MAX 5
int i = 7;
 main()
{
//int i = 0;
float vetor[10];               // declaração de vetor
vetor[1] = 6.645;
vetor[MAX] = 3.867;
vetor[i] = 7.645;
printf("\n vetor[1]=%f \t vetor[%d]=%f \t vetor[%d]=%f",vetor[1],MAX, vetor[MAX],i, vetor[i]);
getch();
}
