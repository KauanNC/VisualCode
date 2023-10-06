#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale (LC_ALL, "portuguese" );
int quantidade;
float precoUni;
float precoF;

printf ("Informe a quantidade de macas compradas: ");
scanf ("%d", &quantidade);

precoUni = quantidade <12 ? 1.30 : 1.0;
precoF = quantidade * precoUni;

printf ("Quantidade de maç?s: %d \n ", quantidade);
printf ("Preço unitário: %.2f \n ", precoUni);
printf ("Preço Final: %.2f \n ", precoF);
    return 0;
}