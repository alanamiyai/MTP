#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
void main ()
{
	srand(time(NULL));
	int i, num, cont=0;
	int vet[1000];
	unsigned char *p;
	for(i=0; i<1000; i++)
	{
		vet[i] = rand();
		p = (unsigned char *)&vet;
	}
	printf("\nDigite um numero entre 0 e 255: ");
	scanf("%d", &num);
	for (i=0; i<sizeof(vet);i++)
		if(p[i]==num)
		{
			cont++;
			printf("\nEm %p, temos %d", p+1, p[i]);
		}
		printf("\nTemos %d bytes com %d entre %p e %p\n\n", cont, num, p, p+sizeof(vet));
		system("pause");
}