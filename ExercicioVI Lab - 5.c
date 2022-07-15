/*
5. Escreva um programa que leia uma quantidade indefinida de valores inteiros da
entrada até que seja digitado o valor zero. Antes de encerrar o programa deve
informar quais foram o menor e o maior valor digitado, sem contar o zero.
*/

#include <stdio.h>

int main()
{
    int a = 1;
    int maior, menor;
    printf("Este programa le valores e diz qual foi o maior e o menor entre os numeros digitados. Detalhe: o programa so para de ler esses valores quando se digita o numero 0!!!\n");
    while((a != 0))
    {
        printf("Digite o valor: ");
        scanf("%d", &a);

        if((a != 0))
        {
            if(a > maior)
            {
                maior = a;
            }
        }
        if((a != 0))
        {
            if(a < menor)
            {
                menor = a;
            }
        }
    }
    printf("Esse foi o maior numero: %d.\n", maior);
    printf("Esse foi o menor numero: %d.\n", menor);
    return 0;
}
