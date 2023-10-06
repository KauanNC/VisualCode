#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valorP;
    char formaDePag;
    float pagamento;

    printf("Formas de pagamento \n 1 - A vista \n 2 - A prazo \n");
    
    printf("Informe o código da forma de pagamento: ");
    scanf("%c", &formaDePag);
    
    printf("Informe o valor do produto:");
    scanf("%d", &valorP);
    

    fflush(stdin);

    switch (formaDePag)
    {
    case 1:
        pagamento = valorP * 0.10;
        break;

    case 2:
        
    default:
        break;
    }
    return 0;
}