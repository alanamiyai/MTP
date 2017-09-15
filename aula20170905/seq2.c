SEQ2.C

#include <iostream>
#include <stdio.h>
using namespace std;
void SafeFlush ()
{
   int base, altura, area;
   printf("Digite a altura do triangulo:\n");
   scanf("%d",&altura);
   printf("\nDigite a base do triangulo:\n");
   scanf("%d", &base);
   area=(base*altura)/2;
   printf("\nArea= %d\n", area);
   system("pause");
}