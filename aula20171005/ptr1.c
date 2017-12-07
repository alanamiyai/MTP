#include <iostream>
#include <stdio.h>
#include <conio.h>

int main ()
{
	unsigned int i=0xFACA8421;
	unsigned char *valori = NULL;
	printf("Valores de i: \n\n");
	printf("\nValor 0x%p: u%p\n\n", &i, i);

	valori = (unsigned char *)&i;
	printf("0x%p : X%p  ", valori, *(valori));
	printf("\n0x%p : X%p ", valori + 1, *(valori+1));
	printf("\n0x%p : X%p ", valori +2, *(valori+2));
	printf("\n0x%p : X%p ", valori + 3, *(valori+3));

	printf("\n\n\n0x%p : X%p  ", valori, *(valori));
	valori++;
	printf("\n0x%p : X%p  ", valori, *(valori));
	valori++;
	printf("\n0x%p : X%p  ", valori, *(valori));
	valori++;
	printf("\n0x%p : X%p  ", valori, *(valori));

	valori = valori-3;
	printf("\n\n\n0x%p : X%p ", valori[0], valori[0]);
	printf("\n0x%p : X%p ", valori[1], valori[1]);
	printf("\nn0x%p : X%p ", valori[2], valori[2]);
	printf("\n0x%p : X%p \n\n\n", valori[3], valori[3]);

	getche ();
	return 0;
}
