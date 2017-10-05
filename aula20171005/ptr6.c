#include <iostream>
#include <stdio.h>
using namespace std;
void main ()
{
	char string[16]={0};
	int i;
	int *p;
	printf("Digite um texto a ser transformado: \n");
	fgets(string, 16, stdin);
	p = (int*)string;
	printf("\nTexto transformado em decimal: ");
	for(i=0; i<sizeof(p); i++)
		printf("%d", p[i]);
	printf("\n\nTexto em hexadecimal: \n");
	for(i=0; i<sizeof(p); i++)
		printf("%x", p[i]);
	printf("\n\n\n");
	system("pause");
}