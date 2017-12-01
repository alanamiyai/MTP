#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * recebeTexto();
void gravarTexto(char * texto, int tamanho);
int main() {
    char * texto;
    printf("\n\n Inicio \n tecle # ENTER para sair\n\n");
    texto = recebeTexto();
    printf("\nGravado na memoria: \n\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    gravarTexto(texto, strlen(texto)); 
    free(texto);
    return 0;
}
char * iniciarTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
    char * texto = iniciarTexto();
    char * aux;
    int c, tamanho = 0;
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n\n ERRO!! SEM MEMORIA \n\n");
        }
    } while(c != '#');
    return texto;
}
void gravarTexto(char * texto, int tamanho)
{
	
FILE* arquivo;
int i;
arquivo= fopen("meutexto.txt", "a");
if (arquivo==NULL)
fprintf(stderr, "Houve um erro na gravacao do arquivo");
else {
	for (i=0;i<tamanho;i++)
	fputc(texto[i],arquivo);
	fclose(arquivo);
}
}