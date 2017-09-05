PRG1.C
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
    int x, y, z, w;
    printf("Digite um numero:\n");
    scanf_s("%d",&x);
	printf("Digite outro numero:\n");
	scanf_s("%d",&y);
	z=x+y;
    printf("Soma=%d\n",z);
	z=x-y;
	printf("Subtracao=%d\n",z);
	w=x/y;
	z=x%y;
	printf("Divisao=%d\n",w);
	printf("Resto=%d\n",z);
    system("pause");
}