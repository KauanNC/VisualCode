#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // incializando as variaveis
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // limpa o cache de input.

    printf("Informe o seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("Digite o seu nome: ");
      gets(nome);
     // fgets(nome, 250, stdin);
     // scanf("%s", &nome);
     
  //-----------------------------------------------------------------------------------------------------------------------------//   
   
    //nome[strcspn(nome, "\n")] = 0;  utilizado para poder tirar o '\n' ou, o enter

    //  scanf("%s", &nome); <- scanf sendo utilizado no código para ler o a sentença 
    //  O 'scanf' só lê a informação até antes vc por o espaço na palavra, após o espaço, ele não le mais.
    
    // fgets(nome, 250, stdin); <- fgets sendo utilizado no código
    // 'fgets' opção alternativa para poder utilizar no lugar do 'scanf'
    
    //  O 'gets' é mais uma alternativa para ser utilizado no lugar do 'scanf' e será ele que estaremos utilizando em sala de aula. 
 
 //----------------------------------------------------------------------------------------------------------------------------------//   

//limpa a tela (limpa o terminal)

system("cls"); // <- Limpa o terminal no WINDOWS
//system ("cls || clear") // <- limpa o terminal em ambos os SO
//system("clear") limpa o terminal no LINUX

    // Exibindo dados ao usuário
    printf("nome: %s \n", nome);
    printf("Sexo: %c \n", sexo);
    printf("Idade: %d \n", idade);
    printf("peso: %.2f \n", peso);

    return 0;
}