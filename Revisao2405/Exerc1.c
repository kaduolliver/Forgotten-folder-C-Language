#include <stdio.h>

int main(){

int num1, num2, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}