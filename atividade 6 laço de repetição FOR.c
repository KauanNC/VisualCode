#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero;
    int soma = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("digite o %d° numero: \n", i);
        scanf ("%d", &numero); 

    //soma = soma + numero;
     
     soma += numero;
    }

    printf(" Soma: %d \n", soma);

    getchar();
    return 0;
}