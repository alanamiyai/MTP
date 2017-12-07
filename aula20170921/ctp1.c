#include<stdio.h>
#include<ctype.h>
#include<iostream>

int main()
{
	char frase[300];
	printf("Escreva uma frase:\n");
	fgets(frase,300,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(toupper(frase[i]));
	printf("\nFrase toda maiuscula:\n %s" , fase);
	getche ();
	return 0;
}
