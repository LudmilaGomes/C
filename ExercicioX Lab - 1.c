#include <stdio.h>

double AdicioneNaMedia(double valor)
{
    static double soma = 0;
    static int contador = 1;

    soma = soma + valor;

    return (soma/contador++);
}

int main()
{
    int vezes;
    double numero;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &vezes);

    while(vezes--)
    {
        printf("\nDigite o numero: ");
        scanf("%lf", &numero);
        printf("Media = %.2lf\n", AdicioneNaMedia(numero) );
    }

    return 0;
}
