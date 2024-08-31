#include <stdio.h>

#define AL 50

struct aluno{
    char nome[AL];
    int idade;
    float nota;   
};

typedef struct aluno aluno;

int main(){

    int N, i;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &N);

    aluno alunos[N];

    for (i = 0; i < N; i++){
        printf("Insira um nome:\n");
        scanf("%s", alunos[i].nome);
        printf("\nInsira uma idade:\n");
        scanf("%d", &alunos[i].idade);
        printf("\nInsira uma nota:\n");
        scanf("%f", &alunos[i].nota);
    }

    for(i = 0; i < N; i++){
        printf("\nPerfil do aluno:\n");
    printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota); 
    }

    return 0;
}