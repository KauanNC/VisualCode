#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void analise(int numero)
{
    if (numero % 2 == 0)
    {
        printf("PAR!");
    }
    else
    {
        printf("IMPAR!");
    }
}

void limpar()
{
    system("cls||clear");
}

int main()
{
    int numero;

    printf("Informe um numero:");
    scanf("%d", &numero);

    analise(numero);

    return 0;
}