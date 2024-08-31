#include <stdio.h>

int fat, n;

int main(){

    printf("Digite um numero inteiro para calcular seu fatorial:");
    scanf("%d", &n);

    for(fat = 1; n > 1; n - 1){
        fat = fat * n;  
    }

    printf("\n%d", fat);

    return 0;
}