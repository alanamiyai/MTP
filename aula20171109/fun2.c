#include <stdio.h>
void divisao (int *x, int *y, int *z, int *w)
{
	*z=*x/ *y;
	*w= *x%*y;
	printf("\nQuociente = %d. Resto = %d\n\n", *z, *w);
}
int main ()
{
	int x, y, z, w;
	printf("Digite um numero inteiro: \n");
	scanf("%d",&x);
	printf("Digite outro numero inteiro: \n");
	scanf("%d", &y);
	divisao(&x, &y, &z, &w);
	return 0;
}

