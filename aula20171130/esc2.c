#include <stdio.h>
#include <stdlib.h>
#define N 150

typedef
    struct Ponto{double x, y;}
	Ponto;

int main()
{
    Ponto * conjunto=NULL;
    int num, i;
    char nome[N];
    FILE*arquivo=NULL;
    printf("\nDigite o nome do arquivo: \n");
    scanf("%s", &nome);
    printf("Digite a quantidade de pontos que deseja cadastrar: ");
    scanf("%d", &num);
    conjunto= (Ponto*)malloc(num*sizeof(Ponto));
    for (i=0; i<num; i++) 
	{
        printf("\nCoordenada x de [%d]: ", i);
        scanf ("%lf", &(conjunto[i].x));
    }
	for (i=0; i<num; i++)
	{
		printf("\nCoordenada y de [%d]: ", i);
        scanf ("%lf", &(conjunto[i].y));
	}
	arquivo=fopen(nome, "wb");
    fwrite(conjunto, sizeof(Ponto), num, arquivo);
    fclose(arquivo);
    free(conjunto);
    return EXIT_SUCCESS;
}