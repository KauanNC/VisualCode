#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados
{
    char nome[250];
    char endereco[250];
    int nascimento[250];
    int data_admi;
    int matricula;
};

int main()
{
    struct dados colaborador[3];
    struct dados pessoa[3];
    int i, j;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {

        printf("Informe o nome do  %dº funcionário:", i + 1);
        gets(colaborador[i].nome);

        printf("Informe a data de admissão:");
        scanf("%d", &colaborador[i].data_admi);

        printf("Informe a sua matrícula:");
        scanf("%d", &colaborador[i].matricula);
        fflush(stdin);

        printf("Informe o endereço:");
        gets(colaborador[i].endereco);

        system("cls");
    }

    for (j = 0; j < 3; j++)
    {

        printf("Informe o nome do %dº cliente:", j + 1);
        gets(pessoa[i].nome);

        printf("Informe a data de nascimento:");
        scanf("%d", &pessoa[i].nascimento);
        fflush(stdin);

        printf("Informe o endereço:");
        gets(pessoa[i].endereco);

        fflush(stdin);
        system("cls");
    }
    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("\n%d funcionário\n", i + 1);
        printf("\nFuncionário: %s\n", colaborador[i].nome);
        printf("Data de admissão: %d\n", colaborador[i].data_admi);
        printf("Matrícula: %d\n", colaborador[i].matricula);
        printf("Endereço: %s\n", colaborador[i].endereco);
    }

    for (j = 0; j < 3; j++)
    {
        printf("\n%dº cliente\n", j + 1);
        printf("\nCliente: %s\n", pessoa[i].nome);
        printf("Data de nascimento: %d\n", pessoa[i].nascimento);
        printf("Endereço: %s\n", pessoa[i].endereco);
    }
    return 0;
}