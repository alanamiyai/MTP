#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{
	int i;
	char frase[1000];
	char cifra[1000];
	printf ("\nEntre com uma frase: \n");
	fgets(frase, 1000, stdin);
	frase [strlen (frase)-1]='\0';
	for(i=0; frase[i]!='\0'; i++)
	{
		if(isalpha(frase[i]))
		{
			if ((frase[i] >=65 && frase[i]<78)||(frase[i]>97 && frase[i]<110))
				cifra[i]=frase[i] +13;
			else
				cifra[i]=frase[i]-13;
		}
		else
			cifra[i]=frase[i];
	}
	printf("\nMensagem: \n %s \n", cifra);
	getche ();
	return 0;
}
