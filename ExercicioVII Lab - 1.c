/*
1. Escreva um programa que imprima todos os números inteiros de -10 a 10:
a. Com while;
b. Com do-while; e
c. for.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = -10;

    while(i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    i = -10;

    do
    {

        printf("%d\n", i);
        i++;
    }while(i < 11);

    printf("\n");

    for(int i = -10; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
