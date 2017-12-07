#include <stdio>
#include <conio.h>
int main ()
{
   int num, fat=1;
   prinf("Digite um numero para calcular o fatorial");
   scanf("%d", &num);
   for(int i=num; i>=1; i--)
     fat=fat*i;
   printf("\nFatorial: %d\n", fat);
   getche ();
   return 0;
}

