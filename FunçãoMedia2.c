#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float mediaAluno(float notas[])
{
    int i;
    float somaNota = 0, media;
    for (i = 0; i < 3; i++)
    {
        somaNota += notas[i];
    }
    media += somaNota / i;
    return media;
}

void verificacao(int aprovacao)
{
    float media;

    if (media > 7)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, aprovacao;
    float notas[3], media;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o %dº notas: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = mediaAluno(notas);

    printf("\nMEDIA: %.1f\n", media);
    verificacao(aprovacao);
    return 0;
}