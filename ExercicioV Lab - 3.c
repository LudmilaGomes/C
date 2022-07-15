//3. Questao


#include <stdio.h>

int main()
{
    float notasPrat1, notasPrat2, notasPrat3;
    float notasTeor1, notasTeor2, notasTeor3;
    float media1, media2, media3, mediaFinal;

    printf("Seja bem-vindo!!!\n");
    printf("Insira suas notas para que o programa faca o calculo das medias ponderadas e da media aritmetica.\n\n");

    // Receber os valores das provas praticas.
    printf("Diga a nota de sua 1 prova pratica: ");
    scanf("%f", &notasPrat1);
    printf("Diga a nota de sua 2 prova pratica: ");
    scanf("%f", &notasPrat2);
    printf("Diga a nota de sua 3 prova pratica: ");
    scanf("%f", &notasPrat3);

    // Receber os valores das provas teoricas.
    printf("Diga a nota de sua 1 prova teorica: ");
    scanf("%f", &notasTeor1);
    printf("Diga a nota de sua 2 prova teorica: ");
    scanf("%f", &notasTeor2);
    printf("Diga a nota de sua 3 prova teorica: ");
    scanf("%f", &notasTeor3);

    // If para calcular a media das primeiras provas, de acordo com a maior e menor nota.
    if(notasTeor1 > notasPrat1)
    {
        media1 = ((notasTeor1 * 6) + (notasPrat1 * 4)) / 10;
    }
    else
    {
        if(notasTeor1 < notasPrat1)
        {
            media1 = ((notasTeor1 * 4) + (notasPrat1 * 6)) / 10;
        }
        else        // Este eh o caso em que as duas notas sao iguais
        {
            media1 = (notasTeor1 + notasPrat1 ) / 2;
        }

    }

    // If para calcular a media das segundas provas, de acordo com a maior e menor nota.
    if(notasTeor2 > notasPrat2)
    {
        media2 = ((notasTeor2 * 6) + (notasPrat2 * 4)) / 10;
    }
    else
    {
        if(notasTeor2 < notasPrat2 )
        {
            media2 = ((notasTeor2 * 4) + (notasPrat2 * 6)) / 10;
        }
        else        // Este eh o caso em que as duas notas sao iguais
        {
            media2 = (notasTeor2 + notasPrat2 ) / 2;
        }
    }

    // If para calcular a media das terceiras provas, de acordo com a maior e menor nota.
    if(notasTeor3 > notasPrat3)
    {
        media3 = ((notasTeor3 * 6) + (notasPrat3 * 4)) / 10;
    }
    else
    {
        if(notasTeor3 < notasPrat3)
        {
            media3 = ((notasTeor3 * 4) + (notasPrat3 * 6)) / 10;
        }
        else        // Este eh o caso em que as duas notas sao iguais
        {
            media3 = (notasTeor3 + notasPrat3 ) / 2;
        }
    }

    printf("\n\n");
    printf("Estas sao as notas unificadas (sao as medias ponderadas, relativas as provas teorica e pratica):\n\n");
    printf("Nota unificada 1: %.2f\n", media1);
    printf("Nota unificada 2: %.2f\n", media2);
    printf("Nota unificada 3: %.2f\n\n", media3);

    mediaFinal = ((media1) + (media2) + (media3)) / 3;

    printf("Agora, sua media final (que eh uma media aritmetica das 3 notas unificadas).\n\n");

    if((mediaFinal >= 9) && (mediaFinal <= 10))
    {
        printf("Sua nota na media final foi: A.\n");
        printf("Nota A: entre 9 e 10.\n");
    }
    else if((mediaFinal >= 8) && (mediaFinal < 9))
    {
        printf("Sua nota na media final foi: B.\n");
        printf("Nota B: entre 8 e 9.\n");
    }
    else if((mediaFinal >= 7) && (mediaFinal < 8))
    {
        printf("Sua nota na media final foi: C.\n");
        printf("Nota C: entre 7 e 8.\n");
    }
    else if((mediaFinal >= 6) && (mediaFinal < 7))
    {
        printf("Sua nota na media final foi: D.\n");
        printf("Nota D: entre 6 e 7.\n");
    }
    else if((mediaFinal >= 5) && (mediaFinal < 6))
    {
        printf("Sua nota na media final foi: E.\n");
        printf("Nota E: entre 5 e 6.\n");
    }
    else
    {
        printf("Sua nota na media final foi: F.\n");
        printf("Nota F: menor que 5.\n");
    }

    return 0;
}
