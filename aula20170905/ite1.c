ite1.c

#include <iostream>
#include <stdio>
using namespace std;
void SafeFlush ()
{
   int num, fat=1;
   prinf("Digite um numero para calcular o fatorial");
   scanf("%d", &num);
   for(int i=num; i>=1; i--)
     fat=fat*i;
   printf("\nFatorial: %d\n", fat);
   system("pause");
}

