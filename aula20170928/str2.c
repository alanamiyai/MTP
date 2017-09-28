#include <iostream>
#include <stdio.h>
using namespace std;
void main ()
{
	char frase[1000];
	int cont1, cont2, cont3, cont4;
	printf("Escreva uma frase:\n");
	fgets(frase,10000,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=(tolower(frase[i]));
	for (int i=0; frase[i]!='\0'; i++)
	{
		if (frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u')
			cont1++;
		if (frase[i]==' ')
			cont2++;
	}
	printf("\nV= %d \n E= %d \n", cont1, cont2);
	system("pause");
}