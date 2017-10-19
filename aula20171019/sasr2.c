#include <iostream>
#include <stdio.h>
using namespace std;
void pares_impares (int num)
{
	const int n=20;
	switch (num)
	{
	case 2: { printf("\nOs numeros pares sao: \n");
		for(int i=1; i<=n; i++)
				if (i%2==0)
					printf("%d  ", i);
			break;
			}
	case 1: {
		printf("\nOs numeros impares sao: \n");
		for (int i=1; i<n; i++)
				if (i%2!=0)
					printf("%d  ", i);
			break;
			}
	}
}

void main ()
{
	int num;
	printf("Digite 1 para ver impares e 2 para ver pares: \n");
	scanf("%d", &num);
	pares_impares (num);
	system ("pause");
}
