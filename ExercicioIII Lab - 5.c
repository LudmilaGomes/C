#include <stdio.h>
#include <stdlib.h>

/*
5. Escreva um programa para ler um valor inteiro correspondendo a uma quantia de
dinheiro, calcular e exibir quantas cédulas de 100, 50, 20, 10, 5, 2 e 1 (in memoriam)
são necessárias para compor esse valor.
*/

int main()
{
    int resto;

    printf("Este programa le um valor em dinheiro e, decompondo-o, mostra as cedulas que compoem essa quantia.\n");
    printf("Dito isto, digite aqui sua quantia de dinheiro: ");
    scanf("%d", &resto);

    printf("Notas de 100: %d\n", resto / 100);
    resto = resto % 100;
    printf("Notas de 50: %d\n", resto / 50);
    resto = resto % 50;
    printf("Notas de 20: %d\n", resto / 20);
    resto = resto % 20;
    printf("Notas de 10: %d\n", resto / 10);
    resto = resto % 10;
    printf("Notas de 5: %d\n", resto / 5);
    resto = resto % 5;
    printf("Notas de 2: %d\n", resto / 2);
    resto = resto % 2;
    printf("Notas de 1: %d\n", resto / 1);
    resto = resto % 1;

    return 0;
}
