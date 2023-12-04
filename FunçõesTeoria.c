/* Exemplpo de código sem função

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[200];
    int idade;

    printf("\n=============================================\n");
    printf("\tServico Nacional de Aprendizagem\n");
    printf("\n=============================================\n");

    printf("\nDigite seu nome:");
    gets(nome);
    system("cls||clear");

    printf("Informe sua idade:");
    scanf("%d", &idade);
    system("cls||clear");

    printf("\n=============================================\n");
    printf("\tServico Nacional de Aprendizagem\n");
    printf("\n=============================================\n");
    printf("\nNOME: %s\n", nome);
    printf("IDADE: %d\n", idade);
    return 0;
} 
/*/

/*Exemplo de código com função*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n=============================================\n");
    printf("\tServico Nacional de Aprendizagem\n");
    printf("\n=============================================\n");
}

void limpar()
{
    system("cls||clear");
}
int main()
{
    char nome[200];
    int idade;

    cabecalho();

    printf("\nDigite seu nome:");
    gets(nome);
    limpar();

    printf("Informe sua idade:");
    scanf("%d", &idade); 
    limpar();

    cabecalho();
    printf("\nNOME: %s\n", nome);
    printf("IDADE: %d\n", idade);
    
}