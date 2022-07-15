/**
 ============================================================================
 Nome      : q1-media.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : O programa le duas notas e calcula a media com uma funcao.
 ============================================================================
 */

#include <stdio.h>

/****
* Media(): Calcula a media de dois valores.
*
* Parametros:
*    valor1 (entrada): o primeiro valor.
*    valor2 (entrada): o segundo valor.
*
* Retorno: retorna sempre a media dos valores recebidos.
****/

float Media(float valor1, float valor2){
    float soma = valor1 + valor2;
    return soma / 2;
}

int main(void){
    float nota1, nota2; /* os valores a serem lidos do usuario */
    float media;        /* para calcular e guardar o resultado */

    /* leitura dos valores */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* calular a media a partir da chamada da funcao */
    media = Media(nota1, nota2);

    /* imprime o resultado */
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);

    return 0;
}

/**
   RESPOSTA:
 O código não estava funcionando da forma adequada pois a função Media, que deveria retornar um valor de tipo float, estava como int.
 Então, os resultados retornados pela função eram sempre números do tipo inteiro, que não possuem casas decimais.
 Dessa forma, o dígito após a vírgula não aparecia: '8', no lugar de '8.5' (no caso, o exemplo dado na questão - média dos valores 8 e 9 resultando em 8).

 Além disso, havia uma incompatibilidade no código entre os tipos dos parâmetros formais (que eram do tipo int) e o parâmetros reias (do tipo float).
*/
