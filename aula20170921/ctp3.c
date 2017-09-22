#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
void main()
{
	int cont=0;
	char frase[300];
	printf("Digite uma frase:\n");
	fgets(frase,300,stdin);
	for(int i=0;frase[i]!='\0';i++)
	{
		if(isalpha(frase[i]));
		cont++;
	}
	printf("O numero de letras digitadas na frase = \n %d\n\n" , cont);
	system("pause");
}