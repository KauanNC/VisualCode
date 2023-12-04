#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarQuantidadeParOuImpar(int numero[])
{
    int i, par = 0, impar = 0;
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("Quantidade de Pares: %d\n", par);
    printf("Quantidade de Impares: %d\n", impar);
}

void limpar()
{
    system("cls||clear");
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int numero[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Informe o %d numero:", i + 1);
        scanf("%d", &numero[i]);
    }
    
    limpar();
    
    for (i = 0; i < 6; i++)
    {
        printf("%dº informado: %d\n",i+1, numero[i]);
    }
    
    verificarQuantidadeParOuImpar(numero);

    return 0;
}