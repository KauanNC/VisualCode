#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[3], media, soma = 0;
    int i;


    for (i = 0; i < 3; i++)
    {
        printf("Digite a %dª nota:", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
        media = soma/3;
    }
    system("cls||clear");
    for (i = 0; i < 3; i++)
    {
        printf("%dª nota inserida: %.1f\n", i + 1, nota[i]);
        
    }
        printf ("Soma: %.1f", soma);
        printf ("media: %.2f\n", media);
    return 0;
}