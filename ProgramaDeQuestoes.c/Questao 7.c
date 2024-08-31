#include <stdio.h>

int main() {
    char resposta;
    
    // Apresenta a pergunta
    printf("Qual e o valor da expressao 5+3*2 em C?\n");
    printf("a) 16\n");
    printf("b) 11\n");
    printf("c) 13\n");
    printf("d) 10\n");
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
