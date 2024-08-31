#include <stdio.h>

#define MAX_NUMEROS 100 // Defina o tamanho máximo do vetor

int contar_pares(int vetor[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
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

    // Conta o número de pares no vetor
    int pares = contar_pares(vetor, tamanho_vetor);

    // Exibe o resultado
    printf("O número de números pares no vetor é: %d\n", pares);

    return 0;
}
