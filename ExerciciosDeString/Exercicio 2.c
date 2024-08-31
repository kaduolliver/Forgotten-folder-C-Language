#include <stdio.h>

float calcular_media(float array[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma / tamanho;
}

int main() {
    float array[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    float media = calcular_media(array, tamanho);
    printf("A média dos elementos do array é: %.2f\n", media);

    return 0;
}
