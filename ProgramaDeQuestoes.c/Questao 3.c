#include <stdio.h>

int main() {
    char resposta;
    
    // Apresenta a pergunta
    printf("O que o operador '==' faz em C?\n");
    printf("a) Atribui um valor a uma variavel.\n");
    printf("b) Compara dois valores.\n");
    printf("c) Divide dois valores.\n");
    printf("d) Multiplica dois valores.\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta); // Utilize um espaço antes de %c para consumir o caractere de nova linha
    
    // Verifica a resposta
    if (resposta == 'b' || resposta == 'b') {
        printf("Resposta correta!.\n");
    } else {
        printf("Resposta incorreta!\n");
    }
    
    return 0;
}
