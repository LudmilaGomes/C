/*
5. Incremente o c�digo-fonte do nosso Jogo de Adivinha��o (anexo) para que ele
permita no m�ximo 5 palpites. A cada leitura, informe ao usu�rio qual � o n�mero
da tentativa e encerre com uma mensagem caso ele n�o acerte ap�s os 5 palpites.
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
