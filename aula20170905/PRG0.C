PRG0.C
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
    int x, y, z;
    printf("Digite um numero:\n");
    scanf_s("%d",&x);
	printf("Digite outro numero:\n");
	scanf_s("%d",&y);
	z=x+y;
    printf("Soma=%d\n",z);
    system("pause");
}

