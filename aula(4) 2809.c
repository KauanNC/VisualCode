#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "portuguese");

char loginsalvo[200] = "julia";
char senhasalva[200] = "220822";
char login[200];
char senha[200];

printf("Digite seu login: ");
gets(login);

printf("Digite seu senha: ");
gets(senha);

if (strcmp (login , loginsalvo) == 0 && strcmp(senha , senhasalva) == 0)
{
printf("Acesso concedido");
} else {
    printf("Acesso negado");
}
 return 0;
}