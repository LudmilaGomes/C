#include <stdio.h>
#include <stdlib.h>

/*
4. Recebendo quatro m�dias bimestrais, calcule a m�dia ponderada anual, sabendo
que o 1� bimestre tem peso 1, o 2� bimestre tem peso 2, o 3� bimestre tem peso 3
e o 4� bimestre tem peso 4.
*/

int main(void)
{
    float nota1, nota2, nota3, nota4;
    float mediaPond;

    printf("Este programa vai receber 4 notas (m�dias bimestrais) e calcular a media ponderada (anual) de acordo com os pesos de cada bimestre!\n");

    printf("Digite a media bimestral 1: ");
    scanf("%f", &nota1);
    printf("Digite a media bimestral 2: ");
    scanf("%f", &nota2);
    printf("Digite a media bimestral 3: ");
    scanf("%f", &nota3);
    printf("Digite a media bimestral 4: ");
    scanf("%f", &nota4);

    mediaPond = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3) + (nota4 * 4)) / 10;

    printf("Esta eh sua media ponderada anual: %.2f\n", mediaPond);

    return 0;
}
