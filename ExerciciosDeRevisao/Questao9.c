#include <stdio.h>

int main() {
    int numero, quadrado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %d e: %d\n", numero, quadrado);

    return 0;
}
