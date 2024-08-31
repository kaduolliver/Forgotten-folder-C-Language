#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char nome[MAX_SIZE];
    int comprimento = 0;

    printf("Digite o nome: ");
    scanf("%s", nome);

    while (nome[comprimento] != '\0') {
        comprimento++;
    }

    printf("O comprimento da string e: %d\n", comprimento);

    return 0;
}
