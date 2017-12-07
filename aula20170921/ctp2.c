#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include <conio.h>
int main()
{
	char frase[300];
	printf("Escreva uma frase:\n");
	fgets(frase,300,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(tolower(frase[i]));
	printf("\nFrase em letras minusculas:\n %s" , frase);
	getche ();
	return 0;
}
