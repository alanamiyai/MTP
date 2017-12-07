#include <stdio.h>
#include <conio.h>

int main ()
{
	double r1, r2, soma;
	printf("Informe um valor real: \n");
	scanf("%lf", &r1);
	printf("\n\nInforme outro valor real: \n");
	scanf("%lf", &r2);
	soma = r1 + r2;
	printf("Enderecos = 0x: \n");
	printf("\nNumero real 1 0x%p : %g\n", &r1, r1);
	printf("\nNumero real 2 0x%p : %g\n", &r2, r2);
	printf("\nSoma 0x%p : %g\n\n", &soma, soma);
	getche ();
	return 0;
}
