#include <stdio.h>
#include <string.h>
#define N 256
void novoArquivo ();
void Acrescentar ();
void LerArquivo ();
int main ()
{
    int opcao;
    do{
        printf("1- Novo arquivo\n");
        printf("2- Acrescentar ao arquivo\n");
	printf("3- Ler arquivo\n");
        printf("0- Sair\n");
        scanf("%d", &opcao);
		getchar();
        if (opcao==1)
        novoArquivo();
       if (opcao==2)
        Acrescentar();
    }while(opcao);
    return 0;
}
void novoArquivo () {
	{
	srand(time(0));
	FILE * firetruck;
	char nomearq[32];
	printf("\nEntre com o nome do arquivo: \n");
	fgets(nomearq, 32, stdin);
        nomearq[strlen(nomearq)-1]='\0';
	firetruck=fopen(nomearq, "w");
	int numeros, i;
	printf("Quantos numeros aleatorios?\n");
	scanf("%d", &numeros);
	for (i=0;i<numeros;i++)
		fprintf(firetruck, "%d\n",rand());
	fclose(firetruck);
	return 0;
}
void Acrescentar () {
	printf("\nDigite o nome do arquivo ao qual deseja acrescentar numeros: \n");
        fgets(nomearq, 32, stdin);
	nomearq[strlen(nomearq)-1]='\0';
	firetruck=fopen(nomearq, "w");
	int numeros, i;
	printf("Quantos numeros aleatorios?\n");
	scanf("%d", &numeros);
	for (i=0;i<numeros;i++)
		fprintf(firetruck, "%d\n",rand());
	fclose(firetruck);
	return 0;
}
void LerArquivo () {        