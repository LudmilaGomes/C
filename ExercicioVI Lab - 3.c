/*
3. Escreva um programa em C que fa�a a leitura de dois valores inteiros e imprima
todos os n�meros do intervalo fechado entre esses dois n�meros (incluindo os
pr�prios n�meros lidos) em ordem crescente. Aten��o: o programa pode permitir
que seja digitado primeiro o maior ou o menor valor e fazer a corre��o quando
necess�rio. Exemplo: se foram digitados os n�meros 2 e 5 (ou 5 e 2), o programa ir�
imprimir �2 3 4 5�.
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
