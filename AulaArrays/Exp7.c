#include <stdio.h>

int main(){

    int matriz1[3][3], matriz2[3][3], soma[3][3];
    int i, j;

    //Solicita ao usuário para inserir os elementos da primeira matriz
    printf("Insira os elementos da primeira matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    //Solicita ao usuário para inserir os elementos da segunda matriz
    printf("Insira os elementos da segunda matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    //Calcula a soma das duas matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    //Imprime a matriz resultante
    printf("\nA matriz resultante da soma das duas matrizes e:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}