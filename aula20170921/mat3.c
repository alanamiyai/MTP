#include<stdio.h>
#include<math.h>
#include <conio.h>

int main()
{
	float n,b,logaritimo;
	printf("Digite um numero: \n");
	scanf("%f", &n);
	printf("\nDigite o valor da base: \n");
	scanf("%f", &b);
	logaritimo=(log10(n))/(log10(b));
	printf("Valor do logaririmo de n na base b = %f \n\n",logaritimo);
	getche ();
	return 0;
}
