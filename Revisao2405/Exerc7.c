#include <stdio.h>

int main(){

    int num[10];
    int maior, menor;
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }

    maior = num[0];
    menor = num[0];

    for (i = 1; i < 10; i++) {
        if (num[i] > maior) {
            maior = num[i];
        }
        if (num[i] < menor) {
            menor = num[i];
        }
    }

    printf("\nO maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}