#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    if(a == 0)
    {
        return -1;
    }
    if(delta < 0)
    {
        return -2;
    }
    else
    {
        delta = ((b * b) - (4 * a * c));
        *x1 = ((( -1 * b) + sqrt(delta)) / (2 * a));
        *x2 = ((( -1 * b) - sqrt(delta)) / (2 * a));
        return 0;
    }
}

int main()
{
    float a, b, c;
    float x1, x2;

    printf("Insira os valores dos coeficientes A, B e C da equacao do 2 grau: ");
    scanf("%f %f %f", &a, &b, &c);

    if(ResolveEquacao2Grau(a, b, c, &x1, &x2) == -1)
    {
        printf("Os coeficientes nao formam equacao do 2 grau.\n");
    }
    else if(ResolveEquacao2Grau(a, b, c, &x1, &x2) == -2)
    {
        printf("A equacao nao possui raizes reais.\n");
    }
    else //if(ResolveEquacao2Grau(a, b, c, &x1, &x2) == 0)
    {
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}
