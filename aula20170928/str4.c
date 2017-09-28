#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void main ()
{
	char frase[10000];
	printf("Escreva uma frase:\n");
	fgets(frase,10000,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(toupper(frase[i]));
	for(int i=0; frase[i]!='\0'; i++)
	{
		if(frase[i]=='A')
			frase[i]='4';
		if(frase[i]=='E')
			frase[i]='3';
		if(frase[i]=='I')
			frase[i]='1';
		if(frase[i]=='O')
			frase[i]='0';
		if(frase[i]=='S')
			frase[i]='5';
		if(frase[i]=='G')
			frase[i]='6';
	}
	printf("\n %s \n\n", frase);
	system("pause");
}

