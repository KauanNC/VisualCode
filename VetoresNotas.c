#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[3];
    int i;


    for (i = 0; i < 3; i++)
    {
        printf("Digite a %dª nota:", i + 1);
        scanf("%f", &nota[i]);
    }
    system("cls||clear");
    for (i = 0; i < 3; i++)
    {
        printf("%dª nota inserida: %1.f\n", i + 1, nota[i]);
    }
    return 0;
}