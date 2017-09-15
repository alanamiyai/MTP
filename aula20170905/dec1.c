dec1.c

#include <iostream>
#include <stdio.h>
using namespace std;
void SafeFlush ()
{
   int num;
   if(num%2==0)
   {
     printf("%d Par\n",num);
     if(num%3==0||num%7==0)
       printf("multiplo 3 ou 7");
   }
   else
   {
     printf("\n %d Impar\n",num);
     if(num%5==0)
       printf("multiplo de 5");
   }
   system("pause");
}

