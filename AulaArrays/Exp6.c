#include <stdio.h>

int main(){
    
          // [i]  [j]     2x3 = ixj -> i = linha / j = coluna

    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Matriz 2x3

    // Percorre a matriz e imprime cada elemento
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    return 0;
}