#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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

char* verificacao( float media)
{
   char resultado [200];

    if (media >= 7)
    {
       strcpy(resultado, "Aprovado");
    }
    else
    {
        strcpy(resultado,"Reprovado");
    }   
	return resultado;
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
    printf ("Resultado: %s\n", verificacao(media));
    return 0;
}
