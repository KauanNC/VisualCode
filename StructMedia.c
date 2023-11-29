#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados
{
    char nome[250];
    int idade;
    float nota[2];
    float media;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados aluno[3];
    int i, j;
    float soma = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome do aluno:");
        gets(aluno[i].nome);

        printf("Informe a idade:");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Informe a %dº nota:", j + 1);
            scanf("%f", &aluno[i].nota[j]);
            soma += aluno[i].nota[j];
        }
        aluno[i].media = soma / j;
        soma = 0;

        fflush(stdin);
        system("cls");
    }
    system("cls");

    printf("\nMostrando os dados inseridos\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n%dº aluno", i + 1);
        printf("\nNome: %s\n", aluno[i].nome);
        printf("Idade: %d\n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%dº Nota: %.1f\n", j + 1, aluno[i].nota[j]);
        }
            printf("Media: %.1f\n", aluno[i].media);

    }
    return 0;
}