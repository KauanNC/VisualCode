#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[250];
    int idade = 0;
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media;

    printf("Informe seu nome:");
    gets(nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

fflush (stdin);

     printf("Nome: %s \n", nome);
    printf("idade: %d  \n", idade);
    printf("primeira nota : %2.f \n", nota1);
    printf("segunda nota :  %2.f \n", nota2);
    printf("terceira nota : %2.f \n", nota3);
    printf("Media da criatura %2.f \n", media);

    if (media < 7)
    {
        printf("Aluno reprovado");
    }
    else
    {
        printf("Aluno aprovado");
    }

    return 0;
}
