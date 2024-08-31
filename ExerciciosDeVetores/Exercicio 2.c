#include <stdio.h>

#define MAX_DISCIPLINAS 5 // Defina o número máximo de disciplinas

int main() {
    int num_disciplinas;
    printf("Digite o número de disciplinas: ");
    scanf("%d", &num_disciplinas);

    if (num_disciplinas > MAX_DISCIPLINAS) {
        printf("O número de disciplinas excede o limite máximo permitido.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    float notas[MAX_DISCIPLINAS];
    float soma_notas = 0;

    // Solicita as notas ao usuário e calcula a soma
    for (int i = 0; i < num_disciplinas; i++) {
        printf("Digite a nota da disciplina %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma_notas += notas[i];
    }

    // Calcula a média
    float media = soma_notas / num_disciplinas;

    // Exibe a média
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
