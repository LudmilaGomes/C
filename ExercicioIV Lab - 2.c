/*
2. Recebendo como entrada o sexo e a altura de uma pessoa, construa um programa
que calcule seu peso ideal, utilizando as seguintes f�rmulas: Peso ideal para
homens: (72.7*h) - 58, peso ideal para mulheres: (62.1*h) - 44.7 (onde h representa
o valor da altura em metros).
    Passos recomendados:
        a. Defina as vari�veis. O sexo pode ser armazenado em um char ou em um
        inteiro, caso prefira.
        b. Fa�a a leitura do sexo (lembre-se do prompt), caso seja do tipo char, o
        formatador � o %c.
        i. � importante que essa leitura seja feita primeiro.
        c. Fa�a a leitura da altura.
        d. Implemente o desvio com if-else, colocando uma atribui��o com uma
        express�o diferente na parte verdadeira e falsa, de acordo com a
        condi��o utilizada e com o sexo correspondente.
        e. Exiba o peso ideal calculado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura, peso;

    printf("Digite 'h' ou 'm' (no caso, 'homem' ou 'mulher', respectivamente)para indicar seu sexo: ");
    scanf("%c", &sexo);

    printf("Digite o valor de sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'h')
    {
        peso = (72.7 * altura) - 58;
    }
    else
    {
        peso = (62.1 * altura) - 44.7;
    }
    printf("Peso ideal de acordo com sua altura: %.2f\n", peso);
    return 0;
}
