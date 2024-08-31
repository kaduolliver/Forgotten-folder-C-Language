#include <stdio.h>

#define MAX_NUMEROS 100 // Defina o tamanho máximo do vetor

int main() {
    int tamanho_vetor;
    int vetor[MAX_NUMEROS];
    int soma = 0;

    // Solicita o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor (até %d): ", MAX_NUMEROS);
    scanf("%d", &tamanho_vetor);

    // Verifica se o tamanho do vetor é válido
    if (tamanho_vetor <= 0 || tamanho_vetor > MAX_NUMEROS) {
        printf("Tamanho de vetor inválido.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Solicita os elementos do vetor ao usuário
    printf("Digite os %d números inteiros:\n", tamanho_vetor);
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // Calcula a média
    float media = (float)soma / tamanho_vetor;

    // Exibe a média
    printf("A média dos números no vetor é: %.2f\n", media);

    return 0;
}
