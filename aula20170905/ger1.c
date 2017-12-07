#include <stdio.h>
#include <conio.h>
int main ()
{
   int num, flag=0;
   printf("Digite um numero para verificar se e primo: ")
   scanf("%d", &num)
   for(int i=2, i<num, i++)
   { 
     if(num%i==0)
     { 
       falg++;
       break;
     }
   }
   if(flag==0)
     printf("\nO numero e primo")
   else
     printf("\nNao e primo")
   getche ();
   return 0;
}

