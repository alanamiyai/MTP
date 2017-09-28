#include <iostream>
#include <stdio.h>
using namespace std;
void main ()
{
	int n, i, vetor[1000], maior, menor;
	printf("Digite a quantidade desejada de posicoes do vetor de 1 a 1000: \n\n");
	scanf("%d", &n);
	for (i=0; i<n; i++)
		vetor[i]=rand()%10;
	maior=vetor[0];
	menor=vetor[0];
	for(i=0; i<n; i++)
	{
		if(maior<vetor[i])
			maior=vetor[i];
		if(menor>vetor[i])
			menor=vetor[i];
	}
	printf("\nO maior numero= %d \nO menor numero= %d \n\n", maior, menor);
	system("pause");
}