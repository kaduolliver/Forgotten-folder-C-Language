#include <stdio.h>

int main() {
    char nome[100]; 
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome); 

    printf("Digite a idade: ");
    scanf("%d", &idade); 

    printf("Nome: %s\n", nome); 
    printf("Idade: %d\n", idade); 

    return 0;
}
