#include<iostream>
#include<stdio.h>
#include <conio.h>
int main()
{
	int num;
	float somaf=0, invertidof;
	double somad=0, invertidod;
	printf("Informe um numero: \n");
	scanf("%d", &num);
	invertidof= (1.0/num);
	invertidod= (1.0/num);
	for(int i=0; i<729; i++)
		somaf= somaf + invertidof;
	for(int i=0; i<729; i++)
		somad= somad + invertidod;
	printf("\nResultado em float = %.15f \n\n",somaf);
	printf("\nResultado em double = %.15lf \n\n",somad);
	getche ();
	return 0;
}
