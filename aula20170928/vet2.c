#include <stdio.h>
#include <conio.h>

int main()
{
	int vetor[10], n, i, j, k, aux;
	for(i=0; i<10; i++)
	{
		printf("\nDigite o numero na posicao %d do vetor:\n", i+1);
		scanf("%d", &n);
		vetor[i]=n;
	}
	for(j=0; j<5; j++)
	{
		i--;
		aux=vetor[j];
		vetor[j]=vetor[i];
		vetor[i]=aux;
	}
	printf("\nO vetor invertido= \n");
	for (k=0; k<10; k++)
		printf("  %d  ", vetor[k]);
	getche ();
	return 0;
}
