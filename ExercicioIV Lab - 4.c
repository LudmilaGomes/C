/*
4. Escreva um programa em C que leia três inteiros e informe qual deles é o valor do
maior deles.
Passos recomendados:
    a. Defina as três variáveis com algum tipo numérico.
    b. Faça a leitura das variáveis. Lembre-se de sempre adicionar um prompt
       (mensagem) antes da leitura para avisar ao usuário o que ele deve digitar.
    c. Implemente um desvio if-else para verificar se a primeira variável lida é
       maior do que a segunda e deixe os blocos de instruções das partes
       verdadeira e falsa preparados.
    d. No desvio verdadeiro do if-else anterior, crie um novo desvio if-else
       aninhado para verificar se a primeira variável lida também é maior do
       que terceira:
        i. Caso a condição seja verdadeira é porque a primeira variável é a
           maior de todas;
        ii. Senão, a terceira que será;
        iii. Implemente esse comportamento.
    e. No desvio falso do if-else mais externo, crie um novo desvio if-else
       aninhado para verificar se a segunda variável lida também é maior do que
       terceira:
        i. Caso a condição seja verdadeira é porque a segunda variável é a
           maior de todas;
        ii. Senão, a terceira que será;
        iii. Implemente esse comportamento.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    puts("Este programa faz a leitura de tres inteiros e indica qual deles eh o maior.");
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    printf("Digite um valor para c: ");
    scanf("%d", &c);

    if(a > b)
    {
        if(a > c)
        {
            printf("A eh maior.\n");
        }
        else
        {
            printf("C eh maior.\n");
        }
    }
    else
    {
        if(b > c)
        {
            printf("B eh maior.\n");
        }
        else
        {
            printf("C eh maior.\n");
        }
    }
    return 0;
}
