
#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A, B, Mult;
	int nlin, ncol, nlin2, ncol2;
	printf("Entre com o numero de linhas e o numero de colunas da matriz 1:");
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	printf("Entre com o numero de linhas e o numero de colunas da matriz 2:");
	scanf("%d", &nlin2);
	scanf("%d", &ncol2);
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	B = criarMatriz(nlin, ncol);
	preencherMatriz(B);
	imprimirMatriz(B);
	Mult = multiplicarMatrizes(A,B);
	imprimirMatriz(Mult);
	destruirMatriz(A);
	destruirMatriz(Mult);
	return EXIT_SUCCESS;
}