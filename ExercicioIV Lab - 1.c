/*
1. Escreva um programa em C que leia dois n�meros como entrada e exiba o menor
deles. Se os n�meros forem iguais, n�o haver� diferen�a em rela��o a qual deles
ser� apresentado.
    Passos recomendados:
        a. Defina as duas vari�veis com algum tipo num�rico.
        b. Fa�a a leitura das vari�veis. Lembre-se de sempre adicionar um prompt
        (mensagem) antes da leitura para avisar ao usu�rio o que ele deve digitar.
        c. Implemente o desvio if-else:
            i. Crie uma condi��o que compara as duas vari�veis para saber qual
            � maior.
            ii. Adicione uma instru��o de sa�da em cada parte do desvio if-else.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("De um valor para A: ");
    scanf("%d", &a);
    printf("De um valor para B: ");
    scanf("%d", &b);
    printf("\n");

    if(a > b)
    {
        printf("A eh maior que B.\n");
    }
    else
    {
        printf("A eh menor que B.\n");
    }
    return 0;
}
