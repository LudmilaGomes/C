/*
3. Escreva um programa que escreve na tela cem vezes, alternadamente, cada frase a
seguir:
� So aprende a programar quem escreve programas
� Quem nao escreve programas nao aprende a programar
[Sugest�es: (1) Use um la�o for com uma vari�vel de contagem i que varia entre 1 e
200. (2) No corpo do la�o, verifique se o valor de i � par e, se for o caso, escreva uma
das frases; se n�o for o caso, escreva a outra frase.]
*/

// Corrigido!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i = 1; i <= 200; i++)
    {
        if(i % 2 == 0)
        {
            printf("So aprende a programar quem escreve programas.\n");
        }
        else
        {
            printf("Quem nao escreve programas nao aprende a programar.\n");
        }
    }
    return 0;
}
