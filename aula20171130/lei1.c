#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * comecaTexto();
char * recebeTexto();
void salvarTexto(char * texto, int nchar);
char * leTexto();
int main() {
    char * texto;
    printf("\n\nInicio \n Digite # ENTER para sair \n\n");
    texto = recebeTexto();
    free(texto);
    return 0;
}
char * comecaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
    char * texto = leTexto();
    char * aux;
    int c, tamanho = 0;
    printf("%s", texto);
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
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    salvarTexto(texto, strlen(texto));
    return texto;
}

void salvarTexto(char * texto, int nchar) {
    FILE *arquivo;
    int i;
    arquivo = fopen("meutexto.txt","a");
    if(arquivo == NULL)
        fprintf(stderr, "\nErro na criacao do arquivo!\n");
    else {
        for(i = 0; i < nchar; i++)
            fputc(texto[i], arquivo);
        fclose(arquivo);
    }
}

char * leTexto() {
    FILE * arquivo;
    char * texto = comecaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen("meutexto.txt","r");
    if(arquivo == NULL)
        return texto;
    else {
        do {
            c = fgetc(arquivo);
            if(c != EOF) {
                aux = (char *) realloc(texto, tamanho+2);
                if(aux != NULL) {
                    texto = aux;
                    texto[tamanho] = c;
                    tamanho++;
                    texto[tamanho] = '\0';
                }
                else printf("\nERRO!! Nao tem memoria\n");
            }
        } while(c != EOF);
        fclose(arquivo);
        return texto;
    }
}