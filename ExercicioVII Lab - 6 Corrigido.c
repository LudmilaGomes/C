/*
6. Escreva um programa em C que apresenta na tela progressões aritméticas ou
geométricas, de acordo com as entradas do usuário.
O seu programa deve iniciar solicitando do usuário os seguintes valores:
• Um caractere c (c = 'a' ou c = 'g'), indicando se deve ser uma prograssao
aritmetica ou geometrica. [Atencao: É importante que o
programa comece lendo o caractere antes dos demais valores.]
• Um numero t1 que representa o primeiro termo da prograssao;
• uma razao r para a prograssao;
• um natural n indicando o numero de termos da progressao;
Como saída, seu programa deve apresentar:
• Todos os elementos da progressão;
• A soma dos elementos da progressão.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    char tipoProg;
    // Caractere para qual tipo de progressao;

    int termo1, razao, numeroTermos;
    // Respectivamente: termo1 que representa o primeiro termo da prograssao; uma razao r para a prograssao; um natural n indicando o numero de termos da progressao;

    int termos, soma = 0;

    printf("Digite 'a' para prograssao aritmetica ou 'g' para progressao geometrica: ");
    scanf("%c", &tipoProg);

    printf("Primeiro termo da progressao: ");
    scanf("%d", &termo1);
    printf("Razao dessa progressao: ");
    scanf("%d", &razao);
    printf("Numero de termos da progressao: ");
    scanf("%d", &numeroTermos);

    termos = termo1;

    for(i = 1; i <= numeroTermos; i++)
    {
        printf("%d\n", termos);
        soma = soma + termos;
        if(tipoProg == 'a')
        {
            termos = termos + razao;
        }
        else
        {
            termos = termos * razao;
        }
    }
    printf("Esta eh a soma dos termos da progressao: %d", soma);
    return 0;
}
