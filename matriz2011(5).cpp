#include <stdio.h>
#include <stdlib.h>

//pedindo 3 bandas e seus integrantes

int main()
{
	
	char nomes [3] [200];
	char integ [5] [200];
	int  i=0,j=0;



	for (i =0; i< 3; i++){
	    printf ("Digite o nome da banda:\n");
	    gets (nomes[i]);
	    
	    for (j=0; j < 5; j++){
	    
			printf ("Digite o nome dos integrantes:\n");
	    	gets (integ[i]);
	    }
	    system ("cls||clear");
		fflush(stdin);
	}
		system ("cls||clear");
		printf ("\nInformações:\n");
	
		for (i = 0; i < 3; i++){
	    printf ("Nome das bandas: %s\n", nomes[i]);
	    for (j=0; j < 5; j++){
	        printf ("NOMES: %s\n", integ[j]);
	    }
	}
	
	    return 0;
}

