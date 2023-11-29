#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    struct dados
    {
        char nome[250];
        char autor[250];
        char categ[250];
        float P;
    };

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    struct dados livro[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome do livro:");
        scanf("%s", livro[i].nome);

        printf("Informe o nome do autor:");
        scanf("%s", livro[i].autor);

        printf("Informe a categoria:");
        scanf("%s", livro[i].categ);

        printf("Informe o preço: R$");
        scanf("%f", &livro[i].P);

        fflush(stdin);
        system("cls");
    }
    system("cls");

    printf("Mostrando os dados inseridos");

    for (i = 0; i < 3; i++)
    {
        printf("\n%dº livro", i + 1);
        printf("\nNome: %s\n", livro[i].nome);
        printf("Autor: %s\n", livro[i].autor);
        printf("Categoria: %s\n", livro[i].categ);
        printf("Preço: %.1f\n", livro[i].P);
    }
    return 0;
}