#include <stdio.h>
#include <stdlib.h>

/*
2. �ndice de Massa Corporal (IMC) � uma medida utilizada pela Organiza��o Mundial
de Sa�de (OMS) e � considerado o padr�o internacional para avaliar o grau de
obesidade das pessoas. O c�lculo do IMC � feito dividindo o peso (em quilogramas)
pela altura (em metros) ao quadrado, ou seja, imc = (peso)/(altura * altura). Construa
um programa, em C, que pe�a ao usu�rio para inserir seus valores de peso e altura e
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
