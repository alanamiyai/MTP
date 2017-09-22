#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
void main()
{
	char frase[300];
	printf("Escreva uma frase:\n");
	fgets(frase,300,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(tolower(frase[i]));
	printf("\nFrase em letras minusculas:\n %s" , frase);
	system("pause");
}