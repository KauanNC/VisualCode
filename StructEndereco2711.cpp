#include <stdio.h>
#include <stdlib.h>

int main()
{

struct dados{
	
	char nome[250];
	char endereco[250];
	int idade;
};
	
	struct dados sedex;
		
		printf ("\nInforme o nome:");
		gets(sedex.nome);
		
		printf ("Informe a idade:");
		scanf ("%d", &sedex.idade);
		
		fflush(stdin);
	
		printf ("Informe o seu endereco:");
		gets   (sedex.endereco);

		system ("cls");
				
		printf ("Mostrando os dados inseridos\n");
	

		printf ("\nNome: %s\n", sedex.nome);
		printf ("Idade: %d\n", sedex.idade);
		printf ("Endereco: %s\n", sedex.endereco);
	
	return 0;
}
