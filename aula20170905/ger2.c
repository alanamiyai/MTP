#include <stdio.h>
#include <conio.h>
int main ()
{
   int num, soma=0;
   printf("Digite o numero a ser verificado: ");
   scanf("%d", &num);
   for(int i=2; i<num; i++)
   {
     if(num%i==0)
       soma=soma+i;
   }
   if(soma==num)
     printf("\nO numero e perfeito\n");
   else
     printf("\nNao e perfeito\n");
   getche ();
   return 0;
}
