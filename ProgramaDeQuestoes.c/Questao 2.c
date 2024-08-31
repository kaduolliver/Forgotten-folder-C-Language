#include <stdio.h>

int main() {
    char resposta;
    
    // Apresenta a pergunta
    printf("Qual e a funcao usada para imprimir no console em C?\n");
    printf("a) print ();\n");
    printf("b) console.log();\n");
    printf("c) printtext();\n");
    printf("d) printf();\n");
    printf("Sua resposta: ");
    scanf(" %c", &resposta); // Utilize um espaço antes de %c para consumir o caractere de nova linha
    
    // Verifica a resposta
    if (resposta == 'd' || resposta == 'd') {
        printf("Resposta correta!.\n");
    } else {
        printf("Resposta incorreta!\n");
    }
    
    return 0;
}
