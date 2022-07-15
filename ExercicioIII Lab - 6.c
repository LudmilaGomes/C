#include <stdio.h>
#include <stdlib.h>

/*
6. Escreva um programa para ler um valor representando um tempo em segundos,
calcular e exibir esse mesmo tempo em: hora, minuto e segundo.
*/

int main()
{
    int tempo;

    printf("Este programa recebe um valor em segundos e devolve esse tempo em horas, minutos e segundos.\n");
    printf("Dito isto, insira aqui o tempo em segundos: ");
    scanf("%d", &tempo);

    printf("%d segundos tem: ", tempo);
    printf("%d hora(s), ", tempo / 3600);
    tempo = tempo % 3600;
    printf("%d minuto(s), ", tempo / 60);
    tempo = tempo % 60;
    printf("%d segundo(s).\n", tempo);

    return 0;

}
