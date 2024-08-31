#include <stdio.h>

int main() {
    char resposta;
    
    // Apresenta a pergunta
    printf("Qual o operador lógico para 'OU' em C?\n");
    printf("a) &&\n");
    printf("b) ||\n");
    printf("c) !\n");
    printf("d) <>\n");
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
