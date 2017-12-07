#include <stdio.h>

void fracao (int* a, int* b, int* c, int* d)
{
	*a=*a**d +*b**c;
	*b=*b**d;
	printf("valor num = %d, no endereco %p\n ",*a, a);
	printf("valor den = %d, no endereco %p\n ", *b, b);
}
int main ()
{
	int a, b, c, d;
	printf("Digite o numerador da fracao 1: \n");
	scanf("%d", &a);
	printf("Digite o denominador da fracao 1: \n");
	scanf("%d", &b);
	printf("Digite o numerador da fracao 2: \n");
	scanf("%d", &c);
	printf("Digite o denominador da fracao 2: \n");
	scanf("%d", &d);
	fracao(&a,&b,&c,&d);
	return 0;
}

