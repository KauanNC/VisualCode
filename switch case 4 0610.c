#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char operacao;
    int n1;
    int n2;
    float resultado;

    printf("Operações disponiveis: \n + = soma \n - = subtração \n * = multiplicação \n / = divisão \n ");
   
    printf("Digite o primeiro número:");
    scanf("%d", &n1);

    printf("Digite o segundo número:");
    scanf("%d", &n2);
    fflush(stdin);

    printf("informe a operação que você deseja fazer:");
    scanf("%c",&operacao);

    system("cls");
    
    switch (operacao)
    {

    case '+':
        resultado = n1 + n2;
        break;

    case '-':
        resultado = n1 - n2;
        break;

    case '*':
        resultado = n1 * n2;
        break;

    case '/':
        resultado = n1 / n2;
        break;

    default:
        printf("Operação inválida");
        break;
    }

printf ("Resultado: %.2f \n", resultado);
    return 0;
}