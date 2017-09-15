#include <iostream>
#include <stdio.h>
using namepspace std;
void SafeFlush()
{
   int base, potencia, resultado=1, p;
   printf("Digite a base da potencia: ");
   scanf("%d", &base);
   printf("Digite o numero ao qual a base deve ser elevada: );
   scanf("%d", &potencia);
   for(p=0; p<potencia; p++)
     resultado=resultado*base;
   printf("\nResultado= %d \n", resultado);
   system("pause");
}
