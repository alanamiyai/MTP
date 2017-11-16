#include <iostream>
#include <stdio.h>
using namespace std;
int media(int *numero, int n)
{
	float soma, media;
	for (int i=0; i<n; i++)
		soma += numero[i];
	media = soma/n;
	printf("\nMedia = ", media);
	return media;
}
void desvio (int *numero, int n, int m)
{
	float d, soma=0;
	for(int i=0; i<n; i++)
		soma = pow(soma + (m-numero[n]),2);
	d=sqrt(soma/(n-1));
	printf("\nDesvio padrao = %f", d);
}
void main ()
{
	int *numeros[100];
	int n, m;
	printf("Quantos numeros deseja calcular: ");
	scanf("%d", &n);
        numeros = calloc(n, sizeof(int));
	for (int i=0; i<n; i++)
	{
		printf("\nNumero %d: ",i+1);
		scanf("%d", numeros[i]);
	}
	m=media(*numeros, n);
	desvio(*numeros, n, m);
	system("pause");
}