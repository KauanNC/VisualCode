#include <stdio.h>
#include <stdlib.h>

int main()
{

struct dados{
	
	char nome[250];
	int idade;
	float nota[2], soma = 0, media[2];
};
	
	struct dados aluno [3];
	int i, j;
	
		for (i = 0; i < 3; i++ )
	{	
		printf ("\nInforme o nome:");
		gets(aluno[i].nome);
		
		fflush (stdin);
		
		printf ("Informe a idade:");
		scanf ("%d", &aluno[i].idade);

		for (j = 0; j < 2; j++)
		{
			printf ("Informe a %d nota:", i+1);
			scanf ("%f", &aluno[i].nota[j]);
			fflush(stdin);
			soma += aluno[i].nota[j];
		}
	
	printf ("Mostrando os dados inseridos\n");
	
	for (i = 0; i < 2; i++ ){
		printf ("\nNome: %s\n", aluno[i].nome);
		printf ("Idade: %d\n", aluno[i].idade);
	
		for (j = 0; j < 2; j++){
			printf ("Nota: %.1f\n", aluno[i].nota[i]);
			printf ("soma: %.1f\n", aluno[i].nota[j);
		}
	}	
	return 0;
