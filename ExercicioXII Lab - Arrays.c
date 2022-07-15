// ************************ QUESTÃO 1: ************************

/**
#include <stdio.h>

int main()
{
    int i;
    int lista[10];
    int soma = 0;

    // preenche o array com valores de 10 até 100;
    for(i = 0; i < 10; i++)
    {
        lista[i] = 10 * (i + 1);
    }

    // apresenta os valores na ordem crescente
    for(i = 0; i < 10; i++)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    // apresenta os valores na ordem decrescente
    printf("\n");
    for(i = 9; i >= 0; i--)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    // apresenta o valor armazenado na quinta posição do array
    printf("\n");
    printf("lista[4] = %d\n", lista[4]);

    // apresenta todos os valores armazenados em índices ímpares
    printf("\n");
    for(i = 0; i < 10; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    // soma os valores do array
    printf("\n");
    for(i = 0; i < 10; i++)
    {
        soma = soma + lista[i];
    }

    // mostra a soma dos valores
    printf("Soma de todos os valores do array: %d\n", soma);

    return 0;
}
*/

// ************************ QUESTÃO 2: ************************

/**
#include <stdio.h>

int main()
{
    int i;
    int lista[10];
    int soma = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("\n");
    for(i = 0; i < 10; i++)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    for(i = 9; i >= 0; i--)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    printf("lista[4] = %d\n", lista[4]);

    printf("\n");
    for(i = 0; i < 10; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < 10; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array: %d\n", soma);

    return 0;
}
*/

// ************************ QUESTÃO 3: ********************************

/**
#include <stdio.h>

#define QUANT_VALORES 10

int main()
{
    int i;
    int lista[QUANT_VALORES];
    int soma = 0;

    for(i = 0; i < QUANT_VALORES; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    for(i = 9; i >= 0; i--)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    printf("lista[4] = %d\n", lista[4]);

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array:  %d\n", soma);
    printf("Media de todos os valores do array: %d\n", soma/QUANT_VALORES);

    return 0;
}
*/

// ************************ QUESTÃO 4: ********************************

/**
#include <stdio.h>

#define QUANT_VALORES 10

int main()
{
    int i;
    int lista[QUANT_VALORES];
    int x;  // um último valor inteiro que será lido pelo programa
    int soma = 0;
    int indica = 1; // essa variável vai indicar quando X é igual a um dos valores do array!

    for(i = 0; i < QUANT_VALORES; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("\n");
    printf("Digite um valor para X: ");
    scanf("%d", &x);

    for(i = 0; i < QUANT_VALORES; i++)
    {
        if(x == lista[i])
        {
            printf("\n");
            printf("Posicao de x dentro do array: lista[%d] = %d\n", i, x);
            indica = 0;
            break;
        }
    }

    if(indica)
    {
        printf("O valor de X nao eh igual a nenhum valor de dentro do array\n");
    }

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    for(i = 9; i >= 0; i--)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    printf("lista[4] = %d\n", lista[4]);

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array:  %d\n", soma);
    printf("Media de todos os valores do array: %d\n", soma/QUANT_VALORES);

    return 0;
}
*/

// ************************ QUESTÃO 5: ********************************


#include <stdio.h>

#define QUANT_VALORES 10

int main()
{
    int i;
    int lista[QUANT_VALORES];
    int x;  // um último valor inteiro que será lido pelo programa
    int soma = 0;
    int indica = 1;
    int maior;

    for(i = 0; i < QUANT_VALORES; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("\n");
    printf("Digite um valor para X: ");
    scanf("%d", &x);

    for(i = 0; i < QUANT_VALORES; i++)
    {
        if(x == lista[i])
        {
            printf("Posicao de x dentro do array: lista[%d] = %d\n", i, x);
            indica = 0;
            break;
        }
    }

    if(indica)
    {
        printf("O valor de X nao eh igual a nenhum valor de dentro do array\n");
    }

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    for(i = 9; i >= 0; i--)
    {
        printf("lista[%d] = %d\n", i, lista[i]);
    }

    printf("\n");
    printf("lista[4] = %d\n", lista[4]);

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array:  %d\n", soma);
    printf("Media de todos os valores do array: %d\n", soma/QUANT_VALORES);

    printf("\n");
    for(i = 0; i < QUANT_VALORES; i++)
    {
        if(i == 0)
        {
            maior = lista[0];
        }
        else
        {
            if(maior < lista[i])
            {
                maior = lista[i];
            }
        }
    }
    printf("O maior valor dentro do array eh: %d\n", maior);

    return 0;
}
