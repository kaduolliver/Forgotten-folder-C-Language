#include <stdio.h>
#include <string.h>

struct livro{
    float titulo[100];
    float autor[100];
    int num_paginas;
};

int main(){

    // Criando uma variável do tipo "livro"
    struct livro meu_livro;

    // Atribuindo valores aos campos da estrutura
    strcpy(meu_livro.titulo, "O Senhor dos Aneis");
    strcpy(meu_livro.autor, "J.R.R. Tolkien");
    meu_livro.num_paginas = 1178;

    // Imprimindo os valores
    printf("Titulo: %s\n", meu_livro.titulo);
    printf("Autor: %s\n", meu_livro.autor);
    printf("Numero de paginas: %d\n", meu_livro.num_paginas);

    return 0;
}