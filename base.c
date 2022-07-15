#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3;
    float media;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("Este eh o valor da media aritmetica das suas notas: %.1f", media);

    return 0;
}
