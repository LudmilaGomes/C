/*
O �ndice de Massa Corporal (IMC) � uma medida utilizada pela Organiza��o Mundial
de Sa�de (OMS) e � considerado o padr�o internacional para avaliar o grau de
obesidade das pessoas. O c�lculo do IMC � feito dividindo o peso (em quilogramas)
pela altura (em metros) ao quadrado, ou seja, IMC = (peso) / (altura * altura).
De acordo com o valor calculado, a classifica��o � feita utilizando a tabela a seguir:
 - baixo peso ---> imc <= 18,5
 - normal -------> 18,5 < imc <= 25
 - sobrepeso ----> 25 < imc <= 30
 - obesidade ----> imc > 30
*/

#include <stdio.h>

int main()
{
    float altura, peso, imc;

    puts("Este programa calcula o Indice de Massa Corporal do usuario ao receber altura e peso.");
    printf("Qual o seu peso: ");
    scanf("%f", &peso);
    printf("Qual a sua altura: ");
    scanf("%f", &altura);

    imc = (peso) / (altura * altura);
    printf("Seu IMC: %.2f\n", imc);

    if(imc <= 18.50)
    {
        printf("Voce tem baixo peso.\n");
    }
    else
    {
        if((imc > 25.00) && (imc <= 30.00))
        {
            printf("Voce tem sobrepeso.\n");
        }
        else
        {
            if((imc > 18.50) && (imc <= 25.00))
            {
                printf("Voce tem peso normal.\n");
            }
            else
            {
                printf("Voce tem obesidade.\n");
            }
        }
    }
    return 0;
}
