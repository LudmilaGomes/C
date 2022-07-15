/*
5. Escreva um programa em C para calcular as raízes de uma equação do segundo grau.
   O programa deve possuir as seguintes características:
        • Faz a leitura dos os coeficientes a, b, e c através teclado;
        • Verifica se os coeficientes de fato formam uma equação do segundo grau
          (a != 0), caso contrário:
            o Uma mensagem deve ser exibida ao usuário; e
            o O programa deve retornar 1;
                - Basta adicionar um return 1;, o programa se encerra no
                primeiro return que encontrar.
        • Calcula o valor do discriminante (delta = b^2 - 4ac)e verifica se a equação
          possui raízes reais(delta => 0), caso contrário:
            o Uma mensagem específica deve ser exibida ao usuário; e
            o O programa deve retornar 2;
        • Verifica quantas raízes reais distintas a equação possui e
            o Caso a equação possua apenas uma raiz(delta = 0):
                - Uma mensagem específica deve ser exibida;
                - O valor dessa raiz deve ser exibido;
            o Caso a equação apresente duas raízes reais(delta > 0)
                - Os valores dessas raízes devem ser exibidos;
            o Lembrando a fórmula das raízes: x = (-b +- raiz(delta)) / 2a
        • Após exibir os resultados o programa deve retornar 0;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;

    puts("Este programa calcula as raizes de uma equacao do segundo grau.");

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if(a == 0)
    {
        printf("Isto nao eh uma equacao do segundo grau!!!\n");
        return 1;
    }

    delta = (pow(b, 2)) - 4 * a * c;
    printf("\n\nEste eh o valor do delta: %.0f.\n\n", delta);

    if(delta < 0)
    {
        printf("Sua equacao nao possui raizes reais!!!\n");
        return 2;
    }
    else if(delta == 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);

        printf("Sua equacao so possui uma raiz real.\n");
        printf("x1: %.0f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Sua equacao possui duas raizes reais!\n");
        printf("x1: %.2f\n", x1);
        printf("x2: %.2f\n", x2);
    }
    return 0;
}
