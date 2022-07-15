/*
4. Escreva um programa que calcule e exiba a média de um conjunto de valores inteiros
lidos da entrada. O tamanho do conjunto de valores é indefinido e o programa deve
terminar de ler novos valores apenas quando o valor zero for lido.
*/

#include <stdio.h>

int main()
{
    int n = 1;
    float soma = 0;
    int cont = 0;

    printf("Este programa le valores e faz uma media deles. Detalhe: o programa so para de ler esses valores quando se digita o numero 0!!!\n");

    while(n != 0)
    {
        printf("Digite o valor: ");
        scanf("%d", &n);

        soma = soma + n;
        if(n != 0)
        {
            cont++;
        }
    }
    printf("Esta eh a media dos valores digitados: %.2f\n", (soma) / (cont));
    return 0;
}
