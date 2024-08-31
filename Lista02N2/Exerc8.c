#include <stdio.h>

int main() {
    float temperatura;
    int escolha;

    printf("Escolha a unidade de temperatura:\n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    scanf("%d", &escolha);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (escolha) {
        case 1: 
            printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", 
                   temperatura, (temperatura * 9 / 5) + 32);
            break;
        case 2: 
            printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius\n", 
                   temperatura, (temperatura - 32) * 5 / 9);
            break;
        default:
            printf("Escolha invalida!\n");
    }

    return 0;
}
