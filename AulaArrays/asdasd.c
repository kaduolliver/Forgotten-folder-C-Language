#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], produto[3][3];
    int i, j, k;

    // Solicita ao usuário para inserir os elementos da primeira matriz
    printf("Insira os elementos da primeira matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Solicita ao usuário para inserir os elementos da segunda matriz
    printf("Insira os elementos da segunda matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Calcula o produto das duas matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            produto[i][j] = 0; // Inicializa o elemento da matriz produto

            for (k = 0; k < 3; k++) {
                produto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprime a matriz resultante
    printf("\nO produto das duas matrizes e:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
