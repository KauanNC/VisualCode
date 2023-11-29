#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados
{
    char nome[250];
    char cliente[250];
    char CPF[250];
    int idade ;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados funcionario;
    struct dados cliente;

        printf("Informe o nome do funcionário:");
        scanf("%s", funcionario.nome);

        printf("Informe a idade:");
        scanf("%d", &funcionario.idade);

        fflush(stdin);

        printf("Informe o CPF:");
        gets (funcionario.CPF);

        system("cls");
       
        printf("Informe o nome do cliente:");
        scanf("%s", cliente.nome);
        
        printf("Informe a idade:");
        scanf("%d", &cliente.idade);

        fflush(stdin);

        printf("Informe o CPF:");
        gets(cliente.CPF);

        system("cls");
    
    system("cls");

    printf("Dados do Funcionário\n");

        printf("\nFuncionário: %s\n", funcionario.nome);
        printf("Idade: %d\n", funcionario.idade);
        printf("CPF: %s\n", funcionario.CPF);
   
    printf("\nDados do Cliente\n");

        printf("\nCliente: %s\n", cliente.nome);
        printf("Idade: %d\n", cliente.idade);
        printf("CPF: %s\n", cliente.CPF);
    
    return 0;
}