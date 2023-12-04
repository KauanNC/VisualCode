/* EXEMPLO DE CODIGO DE FUNÇAO SO QUE SEM FUNÇAO DE PARAMETRO
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n=============================================\n");
    printf("\tServico Nacional de Aprendizagem\n");
    printf("\n=============================================\n");
}

int main()
{
    int primeiroNum;
    int segundoNum;
    int soma;

    cabecalho();

    printf("\nInforme o primeiro numero:");
    scanf("%d", &primeiroNum);

    printf("Informe o segundo numero:");
    scanf("%d", &segundoNum);

    soma = primeiroNum + segundoNum;

    cabecalho();
    printf("\nPrimeiro Numero: %d\n", primeiroNum);
    printf("Segundo Numero: %d\n", segundoNum);
    printf("Soma: %d\n", soma);
}
/**/

/*EXEMPLO DE CODIGO COM FUNÇAO DE PARAMETRO*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n=============================================\n");
    printf("\tServico Nacional de Aprendizagem\n");
    printf("\n=============================================\n");
}
int somar(int primeiroNum, int segundoNum)
{
    int somaNumeros;
    somaNumeros = primeiroNum + segundoNum;
    return somaNumeros;
}
void limpar()
{
    system("cls||clear");
}

int main()
{
    int primeiroNum;
    int segundoNum;
    int soma;

    cabecalho();

    printf("\nInforme o primeiro numero:");
    scanf("%d", &primeiroNum);

    printf("Informe o segundo numero:");
    scanf("%d", &segundoNum);

    soma = somar(primeiroNum, segundoNum);

    limpar();

    cabecalho();
    printf("\nPrimeiro Numero: %d\n", primeiroNum);
    printf("Segundo Numero: %d\n", segundoNum);
    printf("SOMA: %d\n", soma);
}
