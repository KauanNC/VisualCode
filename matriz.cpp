#include <stdio.h>
#include <stdlib.h>

int main()
{
	float notas[3][3], media, soma=0 , _soma[3];
	char nomes [3][200];
	int  i=0,j=0;



	for (i =0; i< 3; i++){
	    printf ("Digite o nome do aluno:\n");
	    gets (nomes[i]);
	    
	    for (j=0; j < 3; j++){
	    
			printf ("Digite as notas do aluno:\n");
	    	scanf ("%f", &notas[i][j]);
	    	soma += notas[i][j];
		       
	    }
	    _soma[i] = soma;
	    soma=0;
	fflush(stdin);
	}
	
	
	media = soma/3;
	system ("cls||clear");
	printf ("\nInformações do aluno:\n");
	
	for (i = 0; i < 3; i++){
	    printf ("Nome: %s\n", nomes[i]);
	    for (j=0; j<3; j++){
	        printf ("Notas: %.1f\n", notas[i][j]);
	    }
	    printf ("Media: %.1f\n", _soma[i]/3);
	}
	    return 0;
}

