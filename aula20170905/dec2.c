#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

int main ();
{
   srand(time(0));
   int num, flag=0, var, var2, num2, num3;
   printf("Digite o numero a ser analizado: ");
   scanf(%d, &num);
   if (num%192 == 0)
{
     flag++;
     printf("\nO numero e multiplo de 8192\n");
}
   else
   printf("\nEsse numero nao e multiplo de 8192\n");
   var = 1328 + rand()%1360;
   printf("Quanto e 101 + %d \n", var);
   scanf("%d", &num2);
   if (num2 == var+101)
   flag++;
   var2= rand()%100;
   printf("Digite a multiplicacao de %d por 3: ", var2);
   scanf("%d", &num3);
   if (num3 == var2*3)
   flag++;
   printf("\nVoce somou um total de %d pontos: \n", flag);
   getche ();
   return 0;
}

