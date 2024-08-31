#include <stdio.h>

#define AL 50  // Máximo de caracteres para nome e cidade

struct pessoa {
    char nome[AL], cidade[AL];
    int idade;
};

typedef struct pessoa pessoa;

int main() {

    int numPessoas;

    printf("Quantas pessoas voce deseja cadastrar? ");
    scanf("%d", &numPessoas);

    if (numPessoas <= 0) {
        printf("Número invalido de pessoas. Encerrando...\n");
        return 1; 
    }

    pessoa pessoas[numPessoas]; 
    int i;

    for (i = 0; i < numPessoas; i++) {
        printf("\nDados da pessoa %d:\n", i + 1); 

        printf("Nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Cidade: ");
        scanf("%s", pessoas[i].cidade);
    }

    printf("\n--- Dados cadastrados ---\n");
    for (i = 0; i < numPessoas; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Cidade: %s\n\n", pessoas[i].cidade);
    }

    return 0;
}
