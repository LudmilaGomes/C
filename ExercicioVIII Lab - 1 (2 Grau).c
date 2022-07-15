#include <stdio.h>
#include <math.h>

// Exercício VIII, equação do segundo grau usando funções.

double Delta(double coeficienteA, double coeficienteB, double coeficienteC)
{
    double delta;

    delta = ((coeficienteB * coeficienteB) - (4 * coeficienteA * coeficienteC));

    return delta;
}

double RaizX1(double delta, double coeficienteA, double coeficienteB)
{
    double raiz1;

    raiz1 = ((( -1 * coeficienteB) + sqrt(delta)) / (2 * coeficienteA));

    return raiz1;
}

double RaizX2(double coeficienteA, double coeficienteB, double coeficienteC)
{
    double raiz2, delta;

    delta = Delta(coeficienteA, coeficienteB, coeficienteC);

    raiz2 = ((( -1 * coeficienteB) - sqrt(delta)) / (2 * coeficienteA));

    return raiz2;
}

int main()
{
    double a, b, c, delta;

    printf("Digite os coeficientes da sua equacao do 2 grau: \n");

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    delta = Delta(a, b, c);

    if(a == 0)
    {
        printf("Nao pode ser calculado. Coeficiente 'a' com valor 0 torna essa uma equacao do 1 grau.\n");
        return 1;
    }

    if(delta < 0)
    {
        printf("Nao pode ser calculado. Delta tem valor negativo, ou seja, sua raiz nao existe.\n");
        return 2;
    }

    printf("\n");
    printf("Delta = %.2f\n", delta);
    printf("X1 = %.2f\n", RaizX1(delta, a, b) );
    printf("X2 = %.2f\n", RaizX2(a, b, c) );

    return 0;
}
