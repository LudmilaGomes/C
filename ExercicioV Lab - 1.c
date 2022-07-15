/*
1. Escreva um programa em C que leia uma idade e imprima se essa pessoa é “Jovem”,
“Adulta” ou “Idosa”.
Passos recomendados:
a. Defina a variável idade como int.
b. Faça a leitura da idade do usuário.
c. Implemente os ifs para exibir a classificação do usuário.
i. Tenha bastante atenção em como construir as condições, elas
provavelmente vão precisar de operadores lógicos.
ii. Por exemplo, como construir corretamente que a idade está no
intervalo de 21 a 60 anos?
*/

#include <stdio.h>

int main()
{
    int idade;

    puts("Este programa recebe um numero para a idade do usuario e exibe a classificacao: Jovem, Adulto ou Idoso");
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade <= 26)
    {
        printf("De acordo com a sua idade (%d anos), voce ainda eh jovem!\n", idade);
    }
    else if((idade > 26) && (idade <= 53))
    {
        printf("De acordo com a sua idade (%d anos), voce eh adulto!\n", idade);
    }
    else
    {
        printf("De acordo com a sua idade (%d anos), voce ja eh idoso!\n", idade);
    }
    return 0;
}
