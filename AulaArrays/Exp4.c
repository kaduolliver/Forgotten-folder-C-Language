#include <stdio.h>

int main(){

    int matriz[3][3] = {
      // 0  1  2         
        {1, 2, 3}, // 0
        {4, 5, 6}, // 1
        {7, 8, 9}  // 2
    };

    //Você pode acessar os elementos da matriz assim:
    printf("%d\n", matriz[1][1]); // Isso vai imprimir 5
    printf("%d\n", matriz[0][0]);
     printf("%d\n", matriz[3][3]); // Isso vai imprimir lixo de memória, pois não existe posição 3x3 na matriz
}