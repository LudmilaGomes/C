#include <stdio.h>
#include <math.h>

int EhTrianguloRetangulo(float a, float b, float c)
{
    if(c*c + b*b == a*a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float FormaTrianguloRetangulo(float a, float b, float c)
{
    if( (a <= 0 && b > 0 && c > 0) || (a > 0 && b <= 0 && c > 0) || (a > 0 && b > 0 && c <= 0) )
    {
        if(a <= 0)
        {
            return sqrt((c*c + b*b));
        }
        if(b <= 0)
        {
            return sqrt(abs(c*c - a*a));
        }
        if(c <= 0)
        {
            return sqrt(abs((a*a - b*b)));
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    float a, b, c;
    float valorFinal;

    printf("Digite valores para os catetos: ");
    scanf("%f %f", &b, &c);
    printf("Digite valores para a hipotenusa: ");
    scanf("%f", &a);

    if( (a>0) && (b>0) && (c>0) )
    {
        if(EhTrianguloRetangulo(a, b, c))
        {
            printf("Forma um triangulo retangulo!\n");
        }
        else
        {
            printf("Nao forma um triangulo retangulo!\n");
        }
    }
    else
    {
        valorFinal = FormaTrianguloRetangulo(a, b, c);

        if(valorFinal == -1)
        {
            printf("Os valores digitados pelo usuario sao invalidos!!!\n");
        }
        else
        {
            printf("Valor final: %.1f\n", valorFinal);
        }
    }

    return 0;
}
