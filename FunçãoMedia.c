// Variavel global = Fora dos blocos (fora dos parenteses)
// Variavel local = Dentro dos blocos (entre os parenteses)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n=============================================\n");
    printf("\tServico Nacional de Aprendizagem\n");
    printf("\n=============================================\n");
}
float mediaNumeros(int primeiroNum, int segundoNum)
{
    float media;
    media = (primeiroNum + segundoNum) / (float)2;
    return media;
}
void limpar()
{
    system("cls||clear");
}

int main()
{
    int primeiroNum, segundoNum;

    cabecalho();
    printf("\nInforme o primeiro numero:");
    scanf("%d", &primeiroNum);

    printf("Informe o segundo numero:");
    scanf("%d", &segundoNum);
    limpar();

    cabecalho();
    printf("\nPrimeiro Numero: %d\n", primeiroNum);
    printf("Segundo Numero: %d\n", segundoNum);
    printf("MEDIA: %.1f\n", mediaNumeros(primeiroNum, segundoNum));

    return 0;
}
