#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
setlocale (LC_ALL, "portuguese");

int cod; 
int trab;
int idade;
char resultado[250];

printf ("Informe o seu codigo: ");
scanf ("%d", &cod);

printf ("Informe sua idade: ");
scanf ("%d", &idade);

printf ("Informe quantos anos voce esta trabalhando: ");
scanf ("%d", &trab);

system ("cls || clear");
fflush(stdin);

if (idade >= 65 || trab >= 30) {

strcpy (resultado, "Aposentaria liberada!");

} else {
    
    strcpy(resultado, "Aposentadoria bloqueada!");
     }

    printf ("Codigo do funcionario: %d \n", cod);
    printf ("idade: %d \n", idade);
    printf ("Tempo de servico: %d \n", trab);
    printf ("Resultado da pesquisa: %s \n", resultado);

    return 0;
}