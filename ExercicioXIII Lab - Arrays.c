// ************************ QUESTÃO 1: ************************

/**
#include <stdio.h>

int main()
int i;
    int lista[10];
    int soma = 0;

    for(i = 0; i < 10; i++)
    {
        lista[i] = 10 * (i + 1);
    }

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

/*
 ************************ QUESTÃO 3: ************************

 Adicione ao programa anterior uma função chamada MediaArray que retorna a
 média real dos valores inteiros contidos em um array recebido como parâmetro.
 Não esqueça que esse tipo função deve sempre receber também o número de
 elementos do array para evitar acesso a elementos inexistentes. Exiba essa média
 no seu programa.
*/
/**
#include <stdio.h>

#define TAMANHO_ARRAY 10

double MediaArray(int ar[], int quantElementos)
{
    int i,
        soma = 0;
    double media;

    for(i = 0; i < quantElementos; i++)
    {
        soma = soma + ar[i];
    }

    media = soma/(quantElementos * 1.0);
    return media;
}

int main()
{
    int i;
    int lista[TAMANHO_ARRAY];
    int soma = 0;

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
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
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array: %d\n", soma);

    printf("Media dos valores do array: %.2lf\n", MediaArray(lista, TAMANHO_ARRAY) );

    return 0;
}
*/

/*
 ************************ QUESTÃO 4: ************************

 Implemente uma função booleana chamada EmArray que retorna verdadeiro caso
 um elemento esteja presente no array. Essa função deve receber como parâmetro,
 além do array e seu tamanho, o elemento que será procurado. Adicione um teste da
 função no main.
*/
/**
#include <stdio.h>

#define TAMANHO_ARRAY 10

double MediaArray(int ar[], int quantElementos)
{
    int i,
        soma = 0;
    double media;

    for(i = 0; i < quantElementos; i++)
    {
        soma = soma + ar[i];
    }

    media = soma/(quantElementos * 1.0);
    return media;
}

int EmArray(int ar[], int quantElementos, int n)
{
    int indica;
    int i;

    for(i = 0; i < quantElementos; i++)
    {
        if(n == ar[i])
        {
            indica = 1;
        }
    }

    if(indica)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i;
    int lista[TAMANHO_ARRAY];
    int soma = 0;
    int x;

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("Digite um numero x: ");
    scanf("%d", &x);

    if(EmArray(lista, TAMANHO_ARRAY, x))
    {
        printf("O valor X digitado esta presente no array!\n");
    }
    else
    {
        printf("O valor X digitado nao esta presente no array!\n");
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
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
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array: %d\n", soma);

    printf("Media dos valores do array: %.2lf\n", MediaArray(lista, TAMANHO_ARRAY) );

    return 0;
}
*/
// ************************ QUESTÃO 5: ************************

/**
#include <stdio.h>

#define TAMANHO_ARRAY 10

double MediaArray(int ar[], int quantElementos)
{
    int i,
        soma = 0;
    double media;

    for(i = 0; i < quantElementos; i++)
    {
        soma = soma + ar[i];
    }

    media = soma/(quantElementos * 1.0);
    return media;
}

int EmArray(int ar[], int quantElementos, int n)
{
    int indica;
    int i;

    for(i = 0; i < quantElementos; i++)
    {
        if(n == ar[i])
        {
            indica = 1;
        }
    }

    if(indica)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int MaximoValorArray(int ar[], int quantElementos)
{
    int i;
    int maior;

    for(i = 0; i < quantElementos-1; i++)
    {
        if(i == 0)
        {
            maior = ar[0];
        }

        if(maior < ar[i+1])
        {
             maior = ar[i+1];
        }
        else
        {
            maior = maior;
        }
    }
    return maior;
}

int main()
{
    int i;
    int lista[TAMANHO_ARRAY];
    int soma = 0;
    int x;

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("Digite um numero x: ");
    scanf("%d", &x);

    if(EmArray(lista, TAMANHO_ARRAY, x))
    {
        printf("O valor X digitado esta presente no array!\n");
    }
    else
    {
        printf("O valor X digitado nao esta presente no array!\n");
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
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
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array: %d\n", soma);

    printf("Media dos valores do array: %.2lf\n", MediaArray(lista, TAMANHO_ARRAY) );

    printf("O elemento de maior valor do array eh: %d\n", MaximoValorArray(lista, TAMANHO_ARRAY));

    return 0;
}
*/

// ************************ QUESTÃO 6: ************************

#include <stdio.h>

#define TAMANHO_ARRAY 10

double MediaArray(int ar[], int quantElementos)
{
    int i,
        soma = 0;
    double media;

    for(i = 0; i < quantElementos; i++)
    {
        soma = soma + ar[i];
    }

    media = soma/(quantElementos * 1.0);
    return media;
}

int EmArray(int ar[], int quantElementos, int n)
{
    int indica;
    int i;

    for(i = 0; i < quantElementos; i++)
    {
        if(n == ar[i])
        {
            indica = 1;
        }
    }

    if(indica)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int MaximoValorArray(int ar[], int quantElementos)
{
    int i;
    int maior;

    for(i = 0; i < quantElementos-1; i++)
    {
        if(i == 0)
        {
            maior = ar[0];
        }

        if(maior < ar[i+1])
        {
             maior = ar[i+1];
        }
        else
        {
            maior = maior;
        }
    }
    return maior;
}
// Assumindo que o array deva estar ordenado de forma crescente:
int EhArrayOrdenado(int ar[], int quantElementos)
{
    int i;
    int menor;

    for(i = 0; i < quantElementos-1; i++)
    {
        if(i == 0)
            {
                menor = ar[0];
            }

            printf("ar[%d] = %d\n", i, menor);
            printf("ar[%d] = %d\n\n", i+1, ar[i+1]);

            if(menor <= ar[i+1])
            {
                printf("menor: %d\n\n", menor);
                menor = ar[i+1];
                continue;
            }
            else
            {
                return 0;
            }

    }
    return 1;
}

int main()
{
    int i;
    int lista[TAMANHO_ARRAY];
    int soma = 0;
    int x;

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("Digite o valor #%d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("Digite um numero x: ");
    scanf("%d", &x);

    if(EmArray(lista, TAMANHO_ARRAY, x))
    {
        printf("O valor X digitado esta presente no array!\n");
    }
    else
    {
        printf("O valor X digitado nao esta presente no array!\n");
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
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
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        if(i % 2 != 0)
        {
            printf("lista[%d] = %d\n", i, lista[i]);
        }
    }

    printf("\n");
    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        soma = soma + lista[i];
    }

    printf("Soma de todos os valores do array: %d\n", soma);

    printf("Media dos valores do array: %.2lf\n", MediaArray(lista, TAMANHO_ARRAY) );

    printf("O elemento de maior valor do array eh: %d\n", MaximoValorArray(lista, TAMANHO_ARRAY));

    if(EhArrayOrdenado(lista, TAMANHO_ARRAY))
    {
        printf("O array esta ordenado\n");
    }
    else
    {
        printf("O array nao esta ordenado.\n");
    }

    return 0;
}
