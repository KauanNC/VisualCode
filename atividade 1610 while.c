#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float soma = 0;
    float media;

    for (i = 0; i < 2; i++)
    {
        do
        {
            printf("digite %dº nota: \n", i+1);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
            {
                printf("nota invalida! \n digite a nota novamente...\n\n");
            }
        } while (nota < 0 || nota > 10);

        soma += nota;
    }
        media = soma / 2;

        printf("Media: %.1f \n", &media);

        return 0;
    }