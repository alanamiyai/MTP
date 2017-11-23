#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A, Ad;
	int nlin, ncol;
	printf("Entre com o numero de linhas e colunas da matriz quadrada (devem ser iguais) ");
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	Ad = adjunta(A);
	imprimirMatriz(Ad);
	destruirMatriz(A);
	destruirMatriz(Ad);
	return EXIT_SUCCESS;
}