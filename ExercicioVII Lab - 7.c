/*
7. Escreva um programa em C que solicita ao usu�rio a entrada de um n�mero natural
n e informa se esse n � primo ou n�o. Os n�meros primos s�o aqueles que s�o
divis�veis apenas por 1 e eles mesmos. Esse problema � de solu��o simples caso sua
ideia seja boa � pense e tente fazer sozinho.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i, j;

    printf("Este programa recebe valores do usuario e, como saida, indica se eh ou nao um numero primo.\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);

    j = 0;
    i = 2;
    // A contagem do for nao comeca no 1 propositalmente;
    while( i < numero )
    {
        if(numero % i == 0)
        {
            printf("%d.\n", i);
            j = 1;
        }
        i++;
    }

    if(j == 0)
    {
        printf("Este numero eh primo!\n");
    }
    else
    {
        printf("Este numero nao eh primo!\n");
    }
    return 0;
}
