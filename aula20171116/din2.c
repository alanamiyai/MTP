#include <stdio.h>
void imprime(float ** transposta, int m, int n)
{
	printf("\nMatriz Transposta= \n\n\n");
	for(int i=0; i<n; i++)
	{
		printf(" ");
		for(int j=0;j<m;j++)
			printf("%g",transposta[i][j]);
		printf("\n");
	}
}
float** transposta (float **matriz, float ** matrizT, int m, int n)
{
	for (int i=0; i<n;i++)
		for(int j=0;j<m;j++)
			matrizT[i][j]=matriz[j][i];
	return matrizT;
}
int main ()
{
	int n, m;
	float **matriz, **matrizT;
	printf("Digite a quantidade de colunas e linhas da matriz, respectivamente: ");
	scanf("%d %d",&n,&m);
	matriz= (float **)calloc(m, sizeof(float*));
	for (int i=0; i<m; i++)
		matriz[i]=(float*)calloc(n, sizeof(float));	
	matrizT= (float **)calloc(n, sizeof(float*));
	for (int j=0; j<n; j++)
		matrizT[j]=(float*)calloc(m, sizeof(float));	
	for (int k=0; k<m; k++)
	{
		for (int l=0; l<n; l++)
		{
			printf("\nDigite o numero na posicao [%d, %d]", k+1, l+1);
			scanf("%f", &matriz[k,l]);
		}
	}
	matrizT = transposta(matriz, matrizT, m, n);
	imprime(matrizT, m, n);
	return 0;
}
