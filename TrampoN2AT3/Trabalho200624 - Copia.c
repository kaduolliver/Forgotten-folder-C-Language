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

void atualizaValor(Livro *livro){
    printf ("\nDigite o Valor atualizado do livro: ");
    scanf ("%f",&livro->preco);
    printf ("\nO valor foi atualizado para: %.2f", livro->preco);
}

void displayLiv(Livro *liv){ //Função: Imprime informações sobre um livro
printf("Livro %s\n", liv->nome);
printf("Número de páginas: %d\n", liv->numeroPaginas);
printf("Preco: R$ %.2f\n", liv->preco);
}

Aluno *createAluno(char *nome, int idade, Livro *liv){
Aluno *a = calloc(1, sizeof(Aluno)); //Calloc = Aloca memória no heap e zera todo o espaço alocado. Sizeof = Determina o tamanho do dado. 
strcpy(a->nome, nome); //Strcpy = Destino/Origem, copiar valores entre duas strings.
a->idade = idade; //Cria um novo aluno alocando memória, copiando o nome, definindo a idade, e criando uma cópia do livro favorito (copyLivro). Retorna um ponteiro para o aluno criado.
a->livro_fav = copyLivro(liv);
return a;
}

void desaloca_aluno(Aluno **aluno_ref){ //Libera a memória alocada para um aluno (free) e define o ponteiro para NULL.
Aluno *aluno = *aluno_ref;
free(aluno);
*aluno_ref = NULL; //Null = define o ponteiro original para NULL. Ponteiro original = aluno_ref
}

void printAluno(Aluno *aluno){ //Função: Imprime informações sobre um aluno e seu livro favorito.
printf("Nome: %s\n", aluno->nome);
printf("Idade: %d\n", aluno->idade); 
printf("Livro Favorito:\n");
displayLiv(aluno->livro_fav);
}

int main(void){ //Cria dois livros L1 e L2 usando createLivro. Cada um com o numero de paginas e seu preço
Livro *L1 = createLivro("Lord Of The Ring", 280, 129); 
Livro *L2 = createLivro("Calice de Fogo", 300, 70);

printf("Livros criados\n"); //Imprime os livros criados com suas paginas e antigos preços
displayLiv(L1);
displayLiv(L2);

atualizaValor(L1); //Pega o preço dos livros L1 e L2 para atualizar de acordo com o preço que o usuario quer
atualizaValor(L2);

printf("Livros com precos atualizados\n"); //Imprime os livros com os novos preços
displayLiv(L1);
displayLiv(L2);

Aluno *bob = createAluno("Bob", 30, L1); //Cria dois alunos "bob" e "mariana" cada um com um livro favorito.
Aluno *mariana = createAluno("Mariana", 19, L2);

printAluno(bob); //Imprime as informações sobre o bob
printAluno(mariana); //Imprime as informações sobre a mariana

desaloca_aluno(&bob); //Libera a memoria alocada para bob e mariana
desaloca_aluno(&mariana);
desaloca_livro(&L1); //Libera a memoria alocada para L1 e L2 (livros)
desaloca_livro(&L2);

return 0;
}