#include <stdio.h>

#define AL 50

struct produto{
    char nome[AL];
    int quantidade;
    float preco;
};

typedef struct produto produto;

int main(){

    int N, i;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &N);

    produto produtos[N];

    for (i = 0; i < N; i++){
        printf("Insira o nome do produto:\n");
        scanf("%s", &produtos[i].nome);

        do {
            printf("Insira a quantidade:\n");
            scanf("%d", &produtos[i].quantidade);
        } while (produtos[i].quantidade < 1);

        do {
            printf("Insira o preco:\n");
            scanf("%f", &produtos[i].preco);
        } while (produtos[i].preco < 0);
    }

    printf("\nDados dos produtos:\n");
    for (i = 0; i < N; i++){
        printf("Nome: %s\n", produtos[i].nome);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preco unitario: %.2f\n\n", produtos[i].preco);
    }

    return 0;
}
