#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6 //-> ele deefine uma constante que auxilia para a criação de vetor
void verificarQuantidadePar(int numero[])
{
    int i, par = 0;
    
    for (i = 0; i < TAM; i++)
    {
        if (numero[i] % 2 == 0)
        {
            par++;
        }
    }
    printf("Quantidade de Pares: %d\n", par);
}

void verificarQuantidadeImpar(int numero[])
{
    int impar = 0, i;
    
    for (i = 0; i < TAM; i++)
    {
        if (numero[i] % 2 != 0)
        {
            impar++;
        }
    }
    printf("Quantidade de Impares: %d\n", impar);
}
void limpar()
{
    system("cls||clear");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Informe o %d numero:", i + 1);
        scanf("%d", &numero[i]);
    }

    limpar();

    for (i = 0; i < TAM; i++)
    {
        printf("%dº informado: %d\n", i + 1, numero[i]);
    }

    verificarQuantidadePar(numero);
    verificarQuantidadeImpar(numero);

    return 0;
}