#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void main ()
{
	int vet[] = {0x0F, 0xFF, 0xFFFF, 0x80000001,0xFFFFFFFF};
	int t =0, tamanho= sizeof(vet)/sizeof(int);
	unsigned char * p = NULL;
	p = (unsigned char *) &vet;

	printf("\n\n\n Memoria: \n");
	for (; p < vet + t; p++)
	{
		printf("\n%p : %x\n",p, *p);
		if(*p != 0x0)
			t++;
	}
	printf("%d", t);
	system("pause");
}