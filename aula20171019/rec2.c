#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

void inversao(char *nome)
{
	    int x,tam;
	    tam=strlen(nome);
            for (x=tam-1; x>=0; x--)
	    printf("%c",nome[x]);
}

void main () 
{
	int x,tam;
	char nome[100];
	printf("Digite uma palavra: \n");
	gets(nome);
	printf("O inverso da palavra e:\n");
	inversao (nome);
	system ("pause");
}