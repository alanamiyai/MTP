#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <conio.h>

int main ()
{
	int vet[] = {0, 1, 2, 4, 8, 16, 1025};
	int t=0, tamanho = (sizeof(vet)/sizeof(int));
	unsigned char * p = NULL;
	p = (unsigned char *)&vet;

	printf("\n\n\nBytes sem uso: \n:");
	for(; p < (vet + tamanho); p++)
	{
		printf("\n%p : %x", p, *p);
		if(*p == 0x0)
			t++;
	}
	printf("%d", t);
	getche ();
	return 0;
}
