/*
2. Escreva um programa que imprima todos os n�meros inteiros do intervalo [1, 1000]
que terminam com o d�gito 4 e s�o m�ltiplos de 6.
[Sugest�o: Construa um la�o de repeti��o com uma vari�vel de contagem que varia
entre 1 e 1000 e verifique se o valor dessa vari�vel satisfaz as condi��es atrav�s de
um desvio condicional no corpo do la�o.] [Dica: O �ltimo d�gito de um n�mero inteiro
tem o mesmo valor do resto da divis�o desse n�mero por 10.]
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i = 1; i <= 1000; i++)
    {
        if((i % 10 == 4) && (i % 6 == 0))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
