#include <stdio.h>
#include <string.h>

int contar_letra(char *string, char letra) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == letra) {
            count++;
        }
    }
    return count;
}

int main() {
    char string[100];
    char letra;
    
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    int resultado = contar_letra(string, letra);
    printf("A letra '%c' aparece %d vezes na string '%s'.\n", letra, resultado, string);
    
    return 0;
}
