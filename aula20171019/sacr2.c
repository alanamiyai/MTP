#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

void main() {
	int cont=0, soma=0, x;
    srand(time(0));
    char c;
    printf("Jogo de Dados- Digite ENTER para rodar o dado \n ");
    do {
	scanf("%c", &c);
	x = dado ();
	printf("... %d\n", x);
	soma = soma + x;
	cont ++;
    } while(cont < 5);
	if (soma > 18 && soma < 23)
		printf("\nVoce Venceu!\n");
	if (soma < 18 || soma > 23)
		printf("\nVoce perdeu!" );
    system ("pause");
}