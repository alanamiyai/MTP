#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
void main()
{
	float a,b,c,angulo;
	printf("Informe o valor do lado b do triangulo:\n\n");
	scanf("%f", &b);
	printf("\nInforme o valor do lado c do triangulo: \n\n");
	scanf("%f", &c);
	printf("\nInforme o valor do angulo formado por c e b, em radianos:\n\n");
	scanf("%f", &angulo);
	a=sqrt(pow(b,2)+pow(c,2)-(2*b*c*cos(ang)));
	printf("\nValor do lado a = \n %f \n\n",a);
	system("pause");
}