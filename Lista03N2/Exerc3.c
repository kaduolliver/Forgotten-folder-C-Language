#include <stdio.h>

typedef struct {
    char nome[51]; 
    float notas[3];
} Estudante;

float mediaNotas(Estudante aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    return soma / 3;
}

int main() {
    
    Estudante aluno1 = {"Carlos", {8.5, 7.0, 9.2}}; 

    float media = mediaNotas(aluno1);
    printf("A media das notas de %s e: %.2f\n", aluno1.nome, media);

    return 0;
}
