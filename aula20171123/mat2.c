#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A;
	int nlin, ncol;
	float Det;
	printf("Entre com o numero de linhas e colunas da matriz quadrada: ");
	scanf("%d", &nlin); 
	ncol = nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	Det = determinante(A);
	printf("Determinante = %f", Det);
	destruirMatriz(A);
	return EXIT_SUCCESS;
}