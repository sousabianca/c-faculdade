#include <stdio.h>
#include <conio.h>

int main()
{
    int i, dia[7] = {12,30,14,7,13,15,6};
	float nota[5] = {8.4,6.9,4.5,4.6,7.2};
	char vogal[5] = {'a', 'e', 'i', 'o', 'u'};

       for(i=0;i<=6;i++)
       {printf("\n %do. numero e' o de dia [%d] = %d",i+1 , i , dia[i]); }
       /*printf("\n vetor dia[0]= %d",dia[0]);
       printf("\n vetor dia[1]= %d",dia[1]);
       printf("\n vetor dia[2]= %d",dia[2]);
       printf("\n vetor dia[3]= %d",dia[3]);
       printf("\n vetor dia[4]= %d",dia[4]);
       printf("\n vetor dia[5]= %d",dia[5]);
       printf("\n vetor dia[6]= %d",dia[6]);  */
       for(i=0;i<=4;i++)
       { printf("\n vetor nota[%d]=%f",i,nota[i]);}

       for(i=0;i<5;i++)
       {printf("\n vetor vogal[%d]=%c",i,vogal[i]);}
    getch();
}

