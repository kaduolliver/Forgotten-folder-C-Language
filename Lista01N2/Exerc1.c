#include <stdio.h>

#define AL 50

struct aluno{
    char nome[AL];
    int idade, matricula;
    float media;
};  

typedef struct aluno aluno;

int main(){

    int N, i;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &N);

    aluno alunos[N];

    for (i = 0; i < N; i++){
        printf("Insira um nome:\n");
        scanf("%s", &alunos[i].nome);
        printf("\nInsira uma idade:\n");
        scanf("%d", &alunos[i].idade);
        printf("Insira a matricula:\n");
        scanf("%d", &alunos[i].matricula);
        printf("Insira uma media:\n");
        scanf("%f", &alunos[i].media);
    }

    for (i = 0; i < N; i++){
        printf("\nPerfil do aluno:\n");
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Media: %f\n", alunos[i].media);
    }

    return 0;
}
