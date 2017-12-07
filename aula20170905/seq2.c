#include <iostream>
#include <stdio.h>
#include <conio.h>
int main ()
{
   int base, altura, area;
   printf("Digite a altura do triangulo:\n");
   scanf("%d",&altura);
   printf("\nDigite a base do triangulo:\n");
   scanf("%d", &base);
   area=(base*altura)/2;
   printf("\nArea= %d\n", area);
   getche ();
   return 0;
}
