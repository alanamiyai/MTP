#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	float x;
	float y;
}Ponto;
int main()
{
	FILE * arquivo;
	Ponto *vetor;
	char nome[100];
	int i;
	printf("\nDigite o nome do arquivo: \n");
	gets(nome);
	arquivo=fopen(nome, "rb");
	
	fseek (arquivo, 0 , SEEK_END);
	int quantidade = ftell (arquivo);
	rewind (arquivo);
	
	quantidade/=sizeof(Ponto);
	
	
	vetor=(Ponto*)malloc(quantidade*sizeof(Ponto));
	
	fread(vetor, sizeof(Ponto), quantidade, arquivo);
	
	for(i=0;i<quantidade;i++)
		printf("x=%g\ny=%g\n", vetor[i].x, vetor[i].y);
	
	fclose(arquivo);
	return 0;
}