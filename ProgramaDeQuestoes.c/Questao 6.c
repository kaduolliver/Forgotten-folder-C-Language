#include <stdio.h>

int main() {
    char resposta;
    
    // Apresenta a pergunta
    printf("Qual e a funcao usada para ler um numero inteiro do teclado em C?\n");
    printf("a) read_integer();\n");
    printf("b) input_int();\n");
    printf("c) scanf();\n");
    printf("d) get_int();\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta); // Utilize um espaço antes de %c para consumir o caractere de nova linha
    
    // Verifica a resposta
    if (resposta == 'c' || resposta == 'c') {
        printf("Resposta correta!.\n");
    } else {
        printf("Resposta incorreta!\n");
    }
    
    return 0;
}
