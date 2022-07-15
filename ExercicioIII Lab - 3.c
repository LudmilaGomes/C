#include <stdio.h>
#include <stdlib.h>

/*
3. Escreva um programa em C que calcule a �rea de um tri�ngulo de base b e altura h.
a. Base e altura devem ser armazenados em vari�veis inteiras.
b. Os valores para b e h devem ser lidos do teclado.
c. Armazenar o valor da �rea em uma vari�vel real chamada area.
*/

int main(void)
{
    int base, altura;
    float area;

    printf("Este programa calcula a area de um triangulo de base b e altura h!\n");
    printf("Dito isto, informe a base do triangulo: ");
    scanf("%d", &base);
    printf("Agora, informe a altura do triangulo: ");
    scanf("%d", &altura);

    area = (base * altura) / 2.0;

    printf("Esta eh a area do triangulo: %.2f\n", area);

    return 0;
}
