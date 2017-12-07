#include<stdio.h>
#include<math.h>
int main()
{
	float distancia,x1,y1,x2,y2;
	printf("Informe o valor da cooordenada x do ponto 1: \n");
	scanf("%f", &x1);
	printf("Informe o valor da coordenada y do ponto 2: \n");
	scanf("%f", &y1);
	printf("Informe o valor da cooordenada x do ponto 2: \n");
	scanf("%f", &x2);
	printf("Informe o valor da coordenada y do ponto 2: \n");
	scanf("%f", &y2);
	distancia=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("A distancia entre os pontos 1 e 2= \n %f \n\n",distancia);
	return 0;
}
