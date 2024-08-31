#include <stdio.h>

#define MAX_NUMEROS 100 // Defina o tamanho máximo do vetor

int calcular_soma(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho_vetor;
    int vetor[MAX_NUMEROS];

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
    }

    // Calcula a soma dos elementos do vetor
    int soma = calcular_soma(vetor, tamanho_vetor);

    // Exibe o resultado
    printf("A soma de todos os elementos do vetor é: %d\n", soma);

    return 0;
}
