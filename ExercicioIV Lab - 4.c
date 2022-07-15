/*
4. Escreva um programa em C que leia tr�s inteiros e informe qual deles � o valor do
maior deles.
Passos recomendados:
    a. Defina as tr�s vari�veis com algum tipo num�rico.
    b. Fa�a a leitura das vari�veis. Lembre-se de sempre adicionar um prompt
       (mensagem) antes da leitura para avisar ao usu�rio o que ele deve digitar.
    c. Implemente um desvio if-else para verificar se a primeira vari�vel lida �
       maior do que a segunda e deixe os blocos de instru��es das partes
       verdadeira e falsa preparados.
    d. No desvio verdadeiro do if-else anterior, crie um novo desvio if-else
       aninhado para verificar se a primeira vari�vel lida tamb�m � maior do
       que terceira:
        i. Caso a condi��o seja verdadeira � porque a primeira vari�vel � a
           maior de todas;
        ii. Sen�o, a terceira que ser�;
        iii. Implemente esse comportamento.
    e. No desvio falso do if-else mais externo, crie um novo desvio if-else
       aninhado para verificar se a segunda vari�vel lida tamb�m � maior do que
       terceira:
        i. Caso a condi��o seja verdadeira � porque a segunda vari�vel � a
           maior de todas;
        ii. Sen�o, a terceira que ser�;
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
