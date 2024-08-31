#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    printf("Insira 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros positivos:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] > 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
