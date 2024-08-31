#include <stdio.h>

int encontrarMaior(int num1, int num2, int num3) {
    int maior = num1; 

    if (num2 > maior) {
        maior = num2; 
    }

    if (num3 > maior) {
        maior = num3; 
    }

    return maior; 
}

int main() {
    int numero1, numero2, numero3, maiorValor;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    maiorValor = encontrarMaior(numero1, numero2, numero3);

    printf("O maior valor eh: %d\n", maiorValor);

    return 0;
}
