/*
5. Incremente o código-fonte do nosso Jogo de Adivinhação (anexo) para que ele
permita no máximo 5 palpites. A cada leitura, informe ao usuário qual é o número
da tentativa e encerre com uma mensagem caso ele não acerte após os 5 palpites.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int palpite, correto;
	int i;

	srand(time(NULL));
	correto = rand() % 100;

	for(i = 1; i <= 5; i++)
    {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if(palpite > correto)
            {
                puts("Palpite alto!");
            }
            else if(palpite < correto)
            {
                puts("Palpite foi baixo!");
            }
            else if( palpite = correto)
            {
                printf("Parabens! Voce acertou!\n");
                return 0;
            }
        printf("\nTentativas restantes: %d.\n\n", 5 - i);
    }
    printf("Voce extrapolou o limite de 5 tentativas!!!\n");
    printf("\nEste era o numero correto: %d.\n", correto);
    return 0;
}
