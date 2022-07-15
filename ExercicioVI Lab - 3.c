/*
3. Escreva um programa em C que faça a leitura de dois valores inteiros e imprima
todos os números do intervalo fechado entre esses dois números (incluindo os
próprios números lidos) em ordem crescente. Atenção: o programa pode permitir
que seja digitado primeiro o maior ou o menor valor e fazer a correção quando
necessário. Exemplo: se foram digitados os números 2 e 5 (ou 5 e 2), o programa irá
imprimir “2 3 4 5”.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Insira um valor para A: ");
    scanf("%d", &a);
    printf("Insira um valor para B: ");
    scanf("%d", &b);

    if(a > b)
    {
        while(b <= a)
        {
            printf("%d\n", b);
            b++;
        }
    }
    else
    {
        while(a <= b)
        {
            printf("%d\n", a);
            a++;
        }
    }
    return 0;
}
