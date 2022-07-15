/*
4. Incremente o código-fonte do nosso Jogo de Adivinhação (anexo) para que, ao final,
seja informado quantos palpites foram feitos até o palpite correto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto;
	int i = 0;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!\n");
            }else if (palpite < correto){
                puts("Palpite foi baixo!\n");
            }
        i++;
	}
    printf("Quantidade de tentativas: %d.\n", i);
    puts("Voce acertou!\n");
	return 0;
}
