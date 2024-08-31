#include <stdio.h>

int main() {
    char resposta;
    
    // Apresenta a pergunta
    printf("Qual e a sintaxe correta para declarar uma variável inteira em C?\n");
    printf("a) int x;\n");
    printf("b) var x;\n");
    printf("c) integer x;\n");
    printf("d) numero x;\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta); // Utilize um espaço antes de %c para consumir o caractere de nova linha
    
    // Verifica a resposta
    if (resposta == 'a' || resposta == 'a') {
        printf("Resposta correta!.\n");
    } else {
        printf("Resposta incorreta!\n");
    }
    
    return 0;
}
