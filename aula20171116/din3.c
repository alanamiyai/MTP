#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * recebeTexto();
int main() {
    char * texto;
    printf("::: Digite ate encontrar o caractere da pausa:\n");
    texto = recebeTexto();
    printf("\n\nA memoria contem : \n");
    printf("%s\n", texto);
    printf("\nTamanho da string= %d\n", strlen(texto));
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
    char * texto = iniciaTexto();
    char * aux;
	char flag;
    int c, tamanho = 0, i=0;
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
            else printf("\n** Erro - Sem memoria! **\n");
        }
    } while(c != '#');
	flag = texto[i];
	while (flag!='#')
    {
        texto[i]=toupper(flag);
        i++;
        flag=texto[i];
    }
    return texto;
}
