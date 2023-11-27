#include <stdio.h>
#include <stdlib.h>

int main()
{

struct dados{
	
	char nome[250];
	int idade;
	float nota[2], soma = 0, media[2];
};
	
	struct dados nota [3];
	int i, j;
	
		for (i = 0; i < 3; i++ )
	{	
		printf ("\nInforme o nome:");
		gets(nota[i].nome);
		
		fflush (stdin);
		
		printf ("Informe a idade:");
		scanf ("%d", &nota[i].idade);
			for (j = 0; j < 2; j++)
		{
		
		printf ("Informe a %d nota:", j+1);
		scanf ("%f", &nota[i].nota[j]);
		soma += nota[j];
		fflush(stdin);
		}
			system ("cls");
	}
	media = soma / 2;
	system ("cls");
	
	printf ("Mostrando os dados inseridos\n");
	
	for (i = 0; i < 2; i++ ){
		printf ("\nNome: %s\n", nota[i].nome);
		printf ("Idade: %d\n", nota[i].idade);
	
		for (j = 0; j < 2; j++){
			printf ("Nota: %.1f\n", nota[i].nota[i]);
			printf ("Media: %.1f\n", media);
		}
	}	
	return 0;
}
