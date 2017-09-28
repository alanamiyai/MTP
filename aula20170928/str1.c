#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void main ()
{
	char frase[10000], str1[]= "bom dia", str2[] = "tchau";
	int ret1, ret2;
	printf("Escreva uma frase:\n");
	fgets(frase,10000,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(tolower(frase[i]));
	printf("A string %s possui %d caracteres\n", frase, strlen(frase));
	ret1 = strcmp(frase, str1);
	if(ret1==0) 
        printf("\Bom Dia pra voce tambem!"); 
    else
        printf("\nVoce quis dizer: %s ? \n\n", frase);
	ret2= strcmp(frase, str2);
	if(ret2==0)
		printf("\nSaindo? Que pena...\n\n");
	else
		printf(" ");
	system("pause");
}