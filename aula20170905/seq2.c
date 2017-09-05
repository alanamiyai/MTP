#include <iostream>
#include <stdio.h>
using namespace std;
void SafeFlush ()
{
   int base, altura, area;
   printf("Digite o valor da base:\n");
   scanf("%d",&base);
   printf("Digite o valor da altura:\n");
   scanf("%d",&altura);
   area=base*altura;
   printf("Altura= %d",&area);
   system("pause");
}
   