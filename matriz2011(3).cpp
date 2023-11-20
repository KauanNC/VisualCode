#include <stdio.h>
#include <stdlib.h>

//pedindo 3 materias com 2 notas e fazendo a media delas

int main()
{
	float notas[3][2], media, soma=0 , somaI[3];
	char nomes [3][200];
	int  i=0,j=0;



	for (i =0; i< 3; i++){
	    printf ("Digite o nome da materia:\n");
	    gets (nomes[i]);
	    
	    for (j=0; j < 2; j++){
	    
			printf ("Digite as notas das materias:\n");
	    	scanf ("%f", &notas[i][j]);
	    	soma += notas[i][j];
		       
	    }
	    somaI[i] = soma;
	    soma=0;
	fflush(stdin);
	}
	
	
	media = soma/2;
	system ("cls||clear");
	printf ("\nInformações:\n");
	
	for (i = 0; i < 3; i++){
	    printf ("Nome das diciplinas: %s\n", nomes[i]);
	    for (j=0; j<2; j++){
	        printf ("Notas: %.1f\n", notas[i][j]);
	    }
	    printf ("Media: %.1f\n", somaI[i]/2);
	}
	    return 0;
}

