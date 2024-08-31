#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char nome[100];
    int numeroPaginas;
    float preco;

} Livro;

typedef struct _aluno{
    char nome[100];
    int idade;
    Livro *livro_fav;

}Aluno;

Livro *createLivro(char *nome, int numeroPaginas, float preco){
    Livro *l = calloc(1, sizeof(Livro));
    strcpy(l->nome, nome);
    l->numeroPaginas = numeroPaginas;
    l->preco = preco;

    return l;
}

Livro *copyLivro(Livro *liv){
    return createLivro(liv->nome, liv->numeroPaginas, liv->preco);
}

void desaloca_livro(Livro **liv_ref){
    Livro *livro_fav = *liv_ref;
    free(livro_fav);
    *liv_ref = NULL;
}

void displayLiv(Livro *liv){
    printf("Livro %s\n", liv->nome);
    printf("Número de páginas: %d\n", liv->numeroPaginas);
    printf("Preco: R$ %.2f\n", liv->preco);
}

Aluno *createAluno(char *nome, int idade, Livro *liv){
    Aluno *a = calloc(1, sizeof(Aluno));
    strcpy(a->nome, nome);
    a->idade = idade;
    a->livro_fav = copyLivro(liv);

    return a;
}

void desaloca_aluno(Aluno **aluno_ref){
    Aluno *aluno = *aluno_ref;
    free(aluno);
    *aluno_ref = NULL;
}

void printAluno(Aluno *aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %s\n", aluno->idade);
    printf("Livro Favorito:\n");
    displayLiv(aluno->livro_fav);
}

int main(void){
    Livro *L1 = createLivro("Lord Of The Ring", 280, 129);
    Livro *L2 = createLivro("Calice de Fogo", 300, 70);

    Aluno *bob = createAluno("Bob", 30, L1);
    Aluno *mariana = createAluno("Mariana", 19, L2);

    printAluno(bob);
    printAluno(mariana);
    
    desaloca_aluno(&bob);
    desaloca_aluno(&mariana);
    desaloca_livro(&L1);
    desaloca_livro(&L2);

    return 0;
}