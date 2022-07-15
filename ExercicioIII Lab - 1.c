#include <stdio.h>
#include <stdlib.h>

/*
 1. Escreva um programa em C que peça ao usuário para digitar o valor do diâmetro de
um círculo e, a seguir, informe os seguintes dados do mesmo:
a. O raio.
b. A área.
c. O perímetro (circunferência).
*/

int main(void)
{
    float diametro, raio, area, perimetro;
    float pi = 3.14;

    //Apresentacao do programa e entrada de dados:

    printf("Este programa obtem o valor do diametro de uma circunferencia e informa seu raio, area e petimetro!\n");
    printf("Dito isto, informe o diametro: ");
    scanf("%f", &diametro);

    //As contas sao feitas:

    raio = diametro / 2;
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;

    //Os resultados sao exibidos:

    printf("Este eh o raio da circunferencia: %.2f\n", raio);
    printf("Esta eh a area da circunferencia: %.2f\n", area);
    printf("Este eh o perimetro da circunferencia: %.2f\n", perimetro);

    return 0;
}
