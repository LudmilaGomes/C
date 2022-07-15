#include <stdio.h>
#include <stdlib.h>

/*
7. Escreva um programa em C que leia do teclado o valor de duas variáveis e faça a
permuta dos seus valores. Use o código-fonte anexo e apenas o complemente,
observando as linhas que não podem ser removidas ou alteradas.
*/

int main()
{
    int a, b;
    int permuta;

	/* a entrada de dados nao pode ser alterada */
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	/* esse printf nao pode ser alterado nem removido. */
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

    permuta = a;
    a = b;
    b = permuta;

	/* esse printf nao pode ser alterado nem removido e nada pode ser alterado apos ele. */
    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
