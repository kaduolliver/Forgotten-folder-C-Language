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

int encontrarMenor(int num1, int num2, int num3) {
    
    int maiorNegativo = encontrarMaior(-num1, -num2, -num3);
    
    return -maiorNegativo; 
}

int main() {
    int numero1, numero2, numero3, menorValor;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    menorValor = encontrarMenor(numero1, numero2, numero3);

    printf("O menor valor eh: %d\n", menorValor);

    return 0;
}
