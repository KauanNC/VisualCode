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

    printf("Opera��es disponiveis: \n + = soma \n - = subtra��o \n * = multiplica��o \n / = divis�o \n ");
   
    printf("Digite o primeiro n�mero:");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero:");
    scanf("%d", &n2);
    fflush(stdin);

    printf("informe a opera��o que voc� deseja fazer:");
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
        printf("Opera��o inv�lida");
        break;
    }

printf ("Resultado: %.2f \n", resultado);
    return 0;
}