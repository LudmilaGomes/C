/**
    Laboratorio de Introducao a Programacao para Engenharia de Computacao.
    Atividade do dia 24 de novembro de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

void TiraBarraN(char *string)
{
    int i;

    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == '\n')
        {
            string[i] = '\0';
        }
    }
}

typedef struct
{
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem()
{
    printf("Ola, esse programa faz o cadastro de informacoes sobre um tesouro, imprime as informacoes e informa a distancia da localizacao do tesouro a uma coordenada recebida.\n");
}

void ApresentaMenu()
{
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg)
{
    printf("\nCadastro de informacoes do tesouro:\n");
    fflush(stdin);
    printf("\tDigite uma descricao do tesouro: ");
    fgets(reg->descricao, MAX_DESCRICAO, stdin);

    TiraBarraN(reg->descricao);

    printf("\tDigite seu valor em reais: ");
    scanf("%f", &reg->valor);

    printf("\tDigite sua coordenada X: ");
    scanf("%d", &reg->x);

    printf("\tDigite sua coordenada Y: ");
    scanf("%d", &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg)
{
    printf("\nInformacoes sobre o tesouro cadastrado:\n");
    printf("\tDescricao:          \"%s\"\n", reg->descricao);
    printf("\tValor em reais:     R$ %.2f\n", reg->valor);
    printf("\tCoordenadas X e Y:  (%d, %d)\n", reg->x, reg->y);
}

float Distancia(tRegistro *reg, int x, int y)
{
    return sqrt( pow(x - reg->x, 2) + pow(y - reg->y, 2) );
}

int main(void)
{
    tRegistro reg, *p; //guarda o registro
    int opcao;
    int coordX, coordY;
    ApresentaMensagem();

    while(1)
    {
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5)
        {
            break;
        }

        switch(opcao)
        {
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:

                printf("\nDigite uma localizacao com coordenadas X e Y:\n");
                printf("\tX: ");
                scanf("%d", &coordX);
                printf("\tY: ");
                scanf("%d", &coordY);

                printf("Distancia de (%d, %d) a (%d, %d) eh de %.2f!\n", reg.x, reg.y, coordX, coordY, Distancia(&reg, coordX, coordY) );

                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Programa encerrando...\n");
    return 0;
}
