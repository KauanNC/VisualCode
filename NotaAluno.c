#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    float soma = 0;
    float nota;
    float media;

    for (i = 1; i <= 2; i++)
    {
        do
        {
            printf("Informe uma nota:");
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        soma += nota;
        fflush(stdin);
    }

    media = soma / 2;

    printf("nota: %.1f \n", nota);

    if (media >= 7)
    {
        printf("Aprovado");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Recuperacao");
    }
    else
    {
        printf("reprovado");
    }

    return 0;
}