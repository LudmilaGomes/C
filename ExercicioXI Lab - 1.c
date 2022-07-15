#include <stdio.h>
#include <math.h>

// programa para calcular a área e o perímetro de um hexágono.

void CalculaHexagono(float lado, float *PonteiroArea, float *PonteiroPerimetro)
{
    *PonteiroArea = ((3.0 * lado * lado * sqrt(3)) / 2.0);
    *PonteiroPerimetro = (6.0 * lado);
}

int main()
{
    float lado, area, perimetro;

    printf("Digite o valor para o lado do hexagono: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, &area, &perimetro);

    printf("\nArea do hexagono:      %.2f\n", area);
    printf("Perimetro do hexagono: %.2f\n", perimetro);

    return 0;
}
