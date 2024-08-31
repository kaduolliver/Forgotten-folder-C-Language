#include <stdio.h>

int calcular_soma(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    int soma = calcular_soma(array, tamanho);
    printf("A soma de todos os elementos do array é: %d\n", soma);

    return 0;
}
