#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int vetor[MAX_SIZE];
    int tamanho = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar elementos ao vetor\n");
        printf("2. Exibir elementos do vetor\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                int n, i;
                printf("Quantos elementos deseja adicionar: ");
                scanf("%d", &n);
                
                printf("Digite os elementos:\n");
                for (i = tamanho; i < tamanho + n && i < MAX_SIZE; i++) {
                    scanf("%d", &vetor[i]);
                }
                
                tamanho = i;
                break;
            }
            case 2: {
                printf("Elementos do vetor:\n");
                for (int i = 0; i < tamanho; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");
                break;
            }
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
