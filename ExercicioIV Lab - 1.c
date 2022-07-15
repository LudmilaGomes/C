/*
1. Escreva um programa em C que leia dois números como entrada e exiba o menor
deles. Se os números forem iguais, não haverá diferença em relação a qual deles
será apresentado.
    Passos recomendados:
        a. Defina as duas variáveis com algum tipo numérico.
        b. Faça a leitura das variáveis. Lembre-se de sempre adicionar um prompt
        (mensagem) antes da leitura para avisar ao usuário o que ele deve digitar.
        c. Implemente o desvio if-else:
            i. Crie uma condição que compara as duas variáveis para saber qual
            é maior.
            ii. Adicione uma instrução de saída em cada parte do desvio if-else.
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
