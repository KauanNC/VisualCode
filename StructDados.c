#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados
{
    char nome[250];
    int nascimento, RG, CPF;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados informacoes[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome:");
        scanf("%s", informacoes[i].nome);

        printf("Informe a data de nascimento:");
        scanf("%d", &informacoes[i].nascimento);

        printf("Informe o CPF:");
        scanf("%d", &informacoes[i].CPF);

        printf("Informe O RG:");
        scanf("%d", &informacoes[i].RG);

        fflush(stdin);
        system("cls");
    }
    system("cls");

    printf("Mostrando os dados inseridos");

    for (i = 0; i < 5; i++)
    {
        printf("\n%dº pessoa", i + 1);
        printf("\nNome: %s\n", informacoes[i].nome);
        printf("Data de Nascimento: %d\n", informacoes[i].nascimento);
        printf("CPF: %d\n", informacoes[i].CPF);
        printf("RG: %d\n", informacoes[i].RG);
    }
    return 0;
}