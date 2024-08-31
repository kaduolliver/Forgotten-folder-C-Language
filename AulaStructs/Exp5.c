#include <stdio.h>

struct pessoa{
    int idade;
    float peso;
    char nome[50];
};

int main(){

    struct pessoa pessoa1;

    pessoa1.idade = 23;
    pessoa1.peso = 65.5;
    strcpy(pessoa1.nome, "Carlos");

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade %d\n", pessoa1.idade);
    printf("Peso: %.2f\n", pessoa1.peso);

    return 0;
}
