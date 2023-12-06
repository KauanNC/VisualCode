#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int convertendo(int numero)
{
     int conversao;
     conversao = numero * 100;
     printf ("Valor convertido em centimetros: %d\n", conversao);
     return conversao;
}
void limpaTela()
{
    fflush(stdin);
    system ("clear || cls");
}
int main()
{
    int valor;

    printf ("Informe um valor em metros: ");
    scanf ("%d", &valor);
    limpaTela();

    printf ("Valor informado: %d\n", valor);
    convertendo(valor);
    return 0;
}