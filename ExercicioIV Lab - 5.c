/*
5. Escreva um programa em C para calcular as ra�zes de uma equa��o do segundo grau.
   O programa deve possuir as seguintes caracter�sticas:
        � Faz a leitura dos os coeficientes a, b, e c atrav�s teclado;
        � Verifica se os coeficientes de fato formam uma equa��o do segundo grau
          (a != 0), caso contr�rio:
            o Uma mensagem deve ser exibida ao usu�rio; e
            o O programa deve retornar 1;
                - Basta adicionar um return 1;, o programa se encerra no
                primeiro return que encontrar.
        � Calcula o valor do discriminante (delta = b^2 - 4ac)e verifica se a equa��o
          possui ra�zes reais(delta => 0), caso contr�rio:
            o Uma mensagem espec�fica deve ser exibida ao usu�rio; e
            o O programa deve retornar 2;
        � Verifica quantas ra�zes reais distintas a equa��o possui e
            o Caso a equa��o possua apenas uma raiz(delta = 0):
                - Uma mensagem espec�fica deve ser exibida;
                - O valor dessa raiz deve ser exibido;
            o Caso a equa��o apresente duas ra�zes reais(delta > 0)
                - Os valores dessas ra�zes devem ser exibidos;
            o Lembrando a f�rmula das ra�zes: x = (-b +- raiz(delta)) / 2a
        � Ap�s exibir os resultados o programa deve retornar 0;
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
