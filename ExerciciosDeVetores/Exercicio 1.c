#include <stdio.h>

int main() {
    int numeros[2];
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numeros[0]);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numeros[1]);
    
    int soma = numeros[0] + numeros[1];
    printf("A soma dos números é: %d\n", soma);
    
    return 0;
}
