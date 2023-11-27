#include <stdio.h>
#include <stdlib.h>

int main()
{

struct dados{
	
	char nome[250];
	int idade;
	float peso;
	float altura;
};
	struct dados pessoa;
	
	printf ("Informe o nome:");
	gets( pessoa.nome);
	
	printf ("Informe a idade:");
	scanf ("%d", &pessoa.idade);
	
	printf ("Informe o peso:");
	scanf ("%f", &pessoa.peso);
	
	printf ("Informe a altura:");
	scanf ("%f", &pessoa.altura);
	
	system ("cls");
	
	printf ("Mostrando os dados inseridos");
	
	printf ("Nome: %s\n", pessoa.nome);
	printf ("Idade: %d\n", pessoa.idade);
	printf ("Altura: %.1f\n", pessoa.altura);
	printf ("Peso: %.1f\n", pessoa.peso);
	return 0;
}
