#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf("\n --------Menu----------\n");
    printf("");
    printf("C�digo \t Prato \t\t Pre�o\n");
    printf("1 \t Picanha     \t R$25.00\n");
    printf("2 \t Lasanha      \t R$20.00\n");
    printf("3 \t Strogonoff    \t R$18.00\n");
    printf("4 \t Bife acebolado\t R$15.00\n");
    printf("5 \t P�o com ovo\t R$5.00\n");



    printf("Informe o c�digo do prato: ");
    scanf("%d", &codigo);

system ("cls");
    switch (codigo)
    {

    case 1:
        printf("Prato = picanha \n Valor = R$25.0");
        break;

    case 2:
        printf("Prato = Lasanha \n Valor R$20.0");
        break;

    case 3:
        printf("Prato = Strogonoff \n Valor R$18.0");
        break;

    case 4:
        printf("Prato = Bife acebolado \n Valor R$15.0");
        break;

    case 5:
        printf("Prato = P�o com ovo \n Valor R$5.0");
        break;

    default:
        printf("C�digo informado � inv�lido!");
        break;
    }
    return 0;
}