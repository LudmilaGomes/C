#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 30

typedef struct
{
    int matricula;
    char nome[41];
    double nota1, nota2, nota3;
    double notaRec;

}tDadosAlunos;

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

double RetornaMedia(tDadosAlunos informacoesAlunos)
{
    return (informacoesAlunos.nota1 + informacoesAlunos.nota2 + informacoesAlunos.nota3) / 3;
}

double RetornaMediaFinal(tDadosAlunos informacoesAlunos)
{
    return (RetornaMedia(informacoesAlunos) * 6 + (informacoesAlunos.notaRec) * 4 ) / 10;
}

void PedeInformacoesAlunos(tDadosAlunos infoAlunos[], int quantAlunos)
{
    int i;

    printf("\n>>>>>> INFORMACOES DOS ALUNOS <<<<<<\n");
    for(i = 0; i < quantAlunos; i++)
    {
        printf("\n");
        printf("Digite a matricula do aluno #%d:\n", i + 1);
        printf("\t>>> ");
        scanf("%d", &infoAlunos[i].matricula);
        fflush(stdin);

        printf("Digite o nome do aluno #%d:\n", i + 1);
        printf("\t>>> ");
        fgets(infoAlunos[i].nome, 41, stdin);
        TiraBarraN(infoAlunos[i].nome);
    }
}

void PedeNotasAlunos(tDadosAlunos infoAlunos[], int quantAlunos)
{
    int i;

    printf("\n>>>>>> NOTAS DOS ALUNOS <<<<<<\n");
    for(i = 0; i < quantAlunos; i++)
    {
        printf("\n");
        printf("Digite as notas do(a) aluno(a) %s:\n", infoAlunos[i].nome);
        printf("\t>>> Nota 1: ");
        scanf("%lf", &infoAlunos[i].nota1);
        printf("\t>>> Nota 2: ");
        scanf("%lf", &infoAlunos[i].nota2);
        printf("\t>>> Nota 3: ");
        scanf("%lf", &infoAlunos[i].nota3);
    }
}

void PedeNotasRecupAlunos(tDadosAlunos infoAlunos[], int quantAlunos)
{
    int i;

    for(i = 0; i < quantAlunos; i++)
    {
        if( RetornaMedia(infoAlunos[i]) >= 4 && RetornaMedia(infoAlunos[i]) < 7 )
        {
            printf("\n>>>>>> NOTAS DE RECUPERACAO DOS ALUNOS <<<<<<\n");
            break;
        }
    }

    for(i = 0; i < quantAlunos; i++)
    {
        if( RetornaMedia(infoAlunos[i]) >= 4 && RetornaMedia(infoAlunos[i]) < 7 )
        {
            printf("\n");
            printf("Aluno(a) em recuperacao: %s\n", infoAlunos[i].nome);
            printf("Media do(a) aluno(a): %.2lf\n", RetornaMedia(infoAlunos[i]));
            printf("Digite sua nota da recuperacao:\n");
            printf("\t>>> ");
            scanf("%lf", &infoAlunos[i].notaRec);
        }
    }
}

void ExibeBoasVindas(void)
{
    printf(">>>>>> Bem-vindo ao programa de controle de notas e dados de alunos <<<<<<\n\n");
}

int main()
{
    FILE *stream;
    stream = fopen("testando.dat", "wb");

    if (stream == NULL){
        return 1;
    }

    char nomeDisc[51];                  /// string para o nome da disciplina;
    int quantAlunos, i, j;              /// inteiro para a quantidade de alunos; variável contador 'i';
    tDadosAlunos infoAlunos[TAM_MAX];   /// array do tipo definido acima (struct) para armazenar as informacoes dos alunos;

    ExibeBoasVindas();

    printf("Digite o nome da disciplina:\n"); /// leitura do nome da disciplina;
    printf("\t>>> ");
    fgets(nomeDisc, 51, stdin);
    TiraBarraN(nomeDisc);

    printf("Digite a quantidade de alunos:\n"); /// leitura da quantidade de alunos;
    printf("\t>>> ");
    scanf("%d", &quantAlunos);

    /// leitura das matriculas e nomes dos alunos de acordo com a quantidade de alunos;
    PedeInformacoesAlunos(infoAlunos, quantAlunos);

    /// leitura das notas dos alunos de acordo com a quantidade de alunos;
    PedeNotasAlunos(infoAlunos, quantAlunos);

    /// leitura das notas da recuperacao dos alunos;
    PedeNotasRecupAlunos(infoAlunos, quantAlunos);

    /// tabela com os resultados e situacao dos alunos
    //fprintf(stream, "bom dia!");
    fprintf(stream, "\nDisciplina: %s\n", nomeDisc);
    fprintf(stream, "---------------------------------------------------------------------------------------\n");
    fprintf(stream, "Matricula   Nome                Nota1    Nota2    Nota3    Rec     Media    Situacao\n");
    fprintf(stream, "---------------------------------------------------------------------------------------\n");
    for(i = 0; i < quantAlunos; i++)
    {
        fprintf(stream, "%05d       %-18s  %-8.2lf %-8.2lf %-8.2lf ", infoAlunos[i].matricula, infoAlunos[i].nome, infoAlunos[i].nota1, infoAlunos[i].nota2, infoAlunos[i].nota3);
        if( RetornaMedia(infoAlunos[i]) >= 4 && RetornaMedia(infoAlunos[i]) < 7 ) /// caso de aluno em recuperacao
        {
            fprintf(stream, "%-7.2lf %-9.2lf", infoAlunos[i].notaRec, RetornaMediaFinal(infoAlunos[i]));

            if( RetornaMediaFinal(infoAlunos[i]) >= 5 )
            {
                fprintf(stream, "Aprovado\n");
            }
            else
            {
                fprintf(stream, "Reprovado\n");
            }
        }
        else                                                                      /// caso de aluno reprovado OU aprovado
        {
            fprintf(stream, "-       %-9.2lf", RetornaMedia(infoAlunos[i]));

            if( RetornaMedia(infoAlunos[i]) >= 7 )
            {
                fprintf(stream, "Aprovado\n");
            }
            else
            {
                fprintf(stream, "Reprovado\n");
            }
        }
    }

    fclose(stream);

    return 0;
}
