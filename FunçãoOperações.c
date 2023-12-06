#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int n1, int n2)
{
    int soma;

    soma = n1 + n2;
    printf("Soma: %d\n", soma);
    return soma;
}
int subtrair(int n1, int n2)
{
    int subtracao;

    subtracao = n1 - n2;
    printf("Subtracao: %d\n", subtracao);
    return subtracao;
}
float multiplicar(int n1, int n2)
{
    int multiplicacao;

    multiplicacao = n1 * n2;
    printf("Multiplicacao: %d\n", multiplicacao);
    return multiplicacao;
}
float dividir(int n1, int n2)
{
    float divisao;

    divisao = n1 / n2;
    printf("Divisao: %.1f\n", divisao);
    return divisao;
}
void limpaTela()
{
    fflush(stdin);
    system("clear || cls");
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    float primeiroNumero = 0;
    float segundoNumero = 0;

    printf("Informe o primeiro numero:");
    scanf("%f", &primeiroNumero);

    printf("Informe o segundo numero:");
    scanf("%f", &segundoNumero);

    limpaTela();

    printf("Primeiro numero informado: %.0f\n", primeiroNumero);
    printf("Segundo numero informado: %.0f\n", segundoNumero);

    somar(primeiroNumero, segundoNumero);
    subtrair(primeiroNumero, segundoNumero);
    multiplicar(primeiroNumero, segundoNumero);
    dividir(primeiroNumero, segundoNumero);
    return 0;
}
