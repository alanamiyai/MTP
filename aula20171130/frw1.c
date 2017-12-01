#include <stdio.h>
#include <string.h>
#define N 256
void salvarDados ();
void lerDados ();
int main ()
{
    int opcao;
    do{
        printf("1- Entrar com informacoes\n");
        printf("2- Ler as informacoes\n");
        printf("0- Sair\n");
        scanf("%d", &opcao);
		getchar();
        if (opcao==1)
        salvarDados();
       if (opcao==2)
        lerDados();
    }while(opcao);
    return 0;
}
void salvarDados () {
	FILE * arquivo;
	char nome [N];
	int idade;
	float altura;
	printf("\nDigite o nome: \n");
	fflush(stdin);
	fgets(nome, N, stdin);
	nome [strlen(nome)-1]='\0';
	printf("\nIdade: \n");
	fscanf(stdin, "%d", &idade);
	printf("\nAltura: \n");
	fscanf(stdin, "%f", &altura);
	arquivo=fopen("info.txt", "w");
		if(arquivo==NULL)
			fprintf(stderr, "\nERRO!! Nao foi possivel gravar o arquivo\n");
		else 
		{
			fprintf(arquivo, "%s\n%d\n%g\n",nome, idade, altura);
			fclose(arquivo);
		}

}
void lerDados () {
	FILE * arquivo;
	char nome [NCHAR];
	int idade;
	float altura; 
	arquivo=fopen("info.txt", "r");
		if(arquivo==NULL)
			fprintf(stderr, "\n\nNao encontramos este arquivo\n");
		else 
		{
			fgets(nome, NCHAR, arquivo);
			nome [strlen(nome)-1]='\0';
			fscanf(arquivo, "%d\n%f\n", &idade, &altura);
			fclose(arquivo);
			printf("Nome: ");
			fprintf(stdout, "%s\n",nome);	
			printf("Idade: ");
			fprintf( stdout, "%d\n",idade);
			printf("Altura: ");
			fprintf(stdout,"%g\n",altura);
		
		}

}