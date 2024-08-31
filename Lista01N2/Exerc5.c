#include <stdio.h>

#define AL 50  

struct livro {
    char titulo[AL], autor[AL];
    int ano;
};

typedef struct livro livro;

int main() {

    int numLivros;

    printf("Quantos livros você deseja cadastrar? ");
    scanf("%d", &numLivros);

    if (numLivros <= 0) {
        printf("Número inválido de livros. Encerrando...\n");
        return 1; 
    }

    livro livros[numLivros]; 
    int i;

    for (i = 0; i < numLivros; i++) {
        printf("\nDados do livro %d:\n", i + 1); 

        printf("Título: ");
        scanf("%s", livros[i].titulo);

        printf("Autor: ");
        scanf("%s", livros[i].autor);

        printf("Ano de Publicação: ");
        scanf("%d", &livros[i].ano);
    }

    printf("\n--- Dados cadastrados ---\n");
    for (i = 0; i < numLivros; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de Publicação: %d\n\n", livros[i].ano);
    }

    return 0;
}
