#include <stdio.h>

int ehPositivo(float valor) {
    if (valor > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (ehPositivo(numero)) {
        printf("O numero %.2f e positivo.\n", numero);
    } else {
        printf("O numero %.2f nao e positivo.\n", numero);
    }

    return 0;
}