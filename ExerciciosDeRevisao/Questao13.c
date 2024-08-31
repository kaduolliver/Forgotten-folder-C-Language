#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite numeros (digite 0 para parar):\n");

    do {
        scanf("%d", &numero);
        soma += numero;
    } while (numero != 0);

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}
