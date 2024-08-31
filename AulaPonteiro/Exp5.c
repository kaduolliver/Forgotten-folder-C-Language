#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *vetor;
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL){ //Verifica se a alocação foi bem-sucedida
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor: \n");
    for (i = 0; i < tamanho; i++){
        scanf("%d", vetor + i); //Equivalente a &vetor[i]
    }

    printf("Elementos do vetor:\n");
    for (i = 0; i < tamanho; i++){
        printf("%d ", *(vetor + i));
    }
    printf("\n");

    free(vetor); //Libera a memória alocada

    return 0;
}