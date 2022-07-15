#include <stdio.h>
#include <stdlib.h>

/*
2. Índice de Massa Corporal (IMC) é uma medida utilizada pela Organização Mundial
de Saúde (OMS) e é considerado o padrão internacional para avaliar o grau de
obesidade das pessoas. O cálculo do IMC é feito dividindo o peso (em quilogramas)
pela altura (em metros) ao quadrado, ou seja, imc = (peso)/(altura * altura). Construa
um programa, em C, que peça ao usuário para inserir seus valores de peso e altura e
informe o IMC.
*/

int main (void)
{
    float peso, altura;
    float imc;

    printf("Este programa faz a leitura de dados de peso e altura do usuario e, apos isso, exibe seu Indice de Massa Corporal (IMC)!\n");
    printf("Dito isto, insira seu peso: ");
    scanf("%f", &peso);
    printf("Agora, insira sua altura: ");
    scanf("%f", &altura);

    imc = (peso)/(altura * altura);

    printf("Este eh seu IMC: %.2f\n", imc);

    return 0;
}
