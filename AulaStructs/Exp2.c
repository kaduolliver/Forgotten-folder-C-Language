#include <stdio.h>

struct pessoa{
    int idade;
    float peso;
    char nome[50];
};

    int main(){
        
        // Criando uma variável do tipo "pessoa"
        struct pessoa pessoa1;

        // Atribuindo valores aos campos da estrutura
        pessoa1.idade = 25;
        pessoa1.peso = 70.5;
        strcpy(pessoa1.nome, "Joao");

        // Imprimindo os valores
        printf("Nome: %s\n", pessoa1.nome);
        printf("Idade: %d\n", pessoa1.idade);
        printf("Peso: %.2f\n", pessoa1.peso);

        return 0;
        
    }