#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A, B, Incognitas;
	float vet[100];
	int nlin, ncol, nlin2, ncol2;
	printf("Entre com o numero de linhas e colunas da matriz 1:");
	scanf("%d", &nlin); 
	ncol=nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	B = criarMatriz(nlin, 1);
	preencherMatriz(B);
	imprimirMatriz(B);
	A = inversa(A);
	Incognitas = multiplicarMatrizes(A,B);
	printf("\nOs valores das incognitas sao, respectivamente: \n");
	imprimirMatriz(Incognitas);
	destruirMatriz(A);
	destruirMatriz(Incognitas);
	destruirMatriz(B);
	return EXIT_SUCCESS;
}