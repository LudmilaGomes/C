/*
3. Escreva um programa em C que leia dois n�meros como entrada e exiba o valor do
   MENOR deles ou se eles s�o iguais.
   Passos recomendados:
    a. Defina as duas vari�veis com algum tipo num�rico.
    b. Fa�a a leitura das vari�veis. Lembre-se de sempre adicionar um prompt
       (mensagem) antes da leitura para avisar ao usu�rio o que ele deve digitar.
    c. Implemente o desvio if-else:
        i. Crie uma condi��o que compara as duas vari�veis para saber se
           elas s�o iguais.
            1. Adicione no desvio verdadeiro do if a instru��o que exibe
               a mensagem de que s�o iguais.
            2. Deixe o bloco de instru��es da parte else preparado.
        ii. Crie um novo desvio if-else aninhado � parte else do if anterior
           para verificar qual das duas var�veis � maior.
            1. Adicione uma instru��o de sa�da em cada parte do desvio
               if-else aninhado.
            2. Verifique a indenta��o.
*/

#include <stdio.h>

int main()
{
    int a, b;

    puts("Este programa recebe dois valores e diz qual eh maior ou se sao iguais.");
    printf("Diga um valor para A: ");
    scanf("%d", &a);
    printf("Diga um valor para B: ");
    scanf("%d", &b);

    if(a == b)
    {
        printf("A eh igual a B.\n");
    }
    else
    {
        if(a > b)
        {
            printf("B eh menor que A.\n");
        }
        else
        {
            printf("A eh menor que B.\n");
        }
    }
    return 0;
}
