SEQL.C
#include <iostream>
#include <stdio.h>
using namespace std;
void SafeFlush ()
{
	int x, y;
	printf("Digite um numero para ser calculado o seu quadrado: \n");
	scanf("%d",&x);
	y=x*x;
	printf("Quadrado= %d",&y"\n");
	system("pause");
}