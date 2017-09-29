#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void main ()
{
	char frase[10000];
	int ret1, ret2;
	printf("Escreva uma frase:\n");
	fgets(frase,10000,stdin);
	frase[strlen (frase)-1]='\0';
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(tolower(frase[i]));
	printf("A string %s possui %d caracteres\n", frase, strlen(frase));
	if (strncmp (frase, "bom dia", 7)==0)
        printf("\nBom Dia pra voce tambem!\n"); 
    else
        printf("\nVoce quis dizer: %s ? \n\n", frase);
	if (strncmp (frase, "tchau", 5)==0)
		printf("\nSaindo? Que pena...\n\n");
	else
		printf(" ");
	system("pause");
}