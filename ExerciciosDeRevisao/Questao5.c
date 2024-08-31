#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matriz[MAX_SIZE][MAX_SIZE];
    int n, i, j, somaDiagonal = 0;

    printf("Digite a ordem da matriz quadrada (n): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("\nMatriz inserida:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da diagonal principal e: %d\n", somaDiagonal);

    return 0;
}
