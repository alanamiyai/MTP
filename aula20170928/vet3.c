#include <iostream>
#include <stdio.h>
#include <conio.h>

int main ()
{
	int vetor[10], n, soma=0, produto=1, i;
	for(i=0; i<10; i++)
	{
		printf("\nDigite o numero na posicao %d do vetor:\n", i+1);
		scanf("%d", &n);
		vetor[i]=n;
	}
	for (i=0; i<10; i++)
		soma= soma +vetor[i];
	for (i=0; i<10; i++)
		produto = produto * vetor[i];
	printf("\nSomatoria= %d \nProduto= %d \n\n", soma, produto);
	getche ();
	return 0;
}
