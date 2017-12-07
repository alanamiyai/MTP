#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
	int vet[4] = {0}, i;
	char *p;
	for(int i=0; i<4; i++)
	{
		printf("Digite o numero %d do vetor:  ", i+1);
		scanf("%d", &vet[i]);
	}
	p = (char *)&vet;
	printf("\nTexto transformado: ");
	for(i=0; i<sizeof(vet); i++)
		printf("%c", p[i]);
	printf("\n\n\n");
	getche ();
	return 0;
}
