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

        printf("Informe o nome do  %d� funcion�rio:", i + 1);
        gets(colaborador[i].nome);

        printf("Informe a data de admiss�o:");
        scanf("%d", &colaborador[i].data_admi);

        printf("Informe a sua matr�cula:");
        scanf("%d", &colaborador[i].matricula);
        fflush(stdin);

        printf("Informe o endere�o:");
        gets(colaborador[i].endereco);

        system("cls");
    }

    for (j = 0; j < 3; j++)
    {

        printf("Informe o nome do %d� cliente:", j + 1);
        gets(pessoa[i].nome);

        printf("Informe a data de nascimento:");
        scanf("%d", &pessoa[i].nascimento);
        fflush(stdin);

        printf("Informe o endere�o:");
        gets(pessoa[i].endereco);

        fflush(stdin);
        system("cls");
    }
    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("\n%d funcion�rio\n", i + 1);
        printf("\nFuncion�rio: %s\n", colaborador[i].nome);
        printf("Data de admiss�o: %d\n", colaborador[i].data_admi);
        printf("Matr�cula: %d\n", colaborador[i].matricula);
        printf("Endere�o: %s\n", colaborador[i].endereco);
    }

    for (j = 0; j < 3; j++)
    {
        printf("\n%d� cliente\n", j + 1);
        printf("\nCliente: %s\n", pessoa[i].nome);
        printf("Data de nascimento: %d\n", pessoa[i].nascimento);
        printf("Endere�o: %s\n", pessoa[i].endereco);
    }
    return 0;
}