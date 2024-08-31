#include <stdio.h>
#include <string.h>

void inverter_string(char *string) {
    int tamanho = strlen(string);
    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0'; 
        tamanho--;
    }
    
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = string[i];
        string[i] = string[tamanho - 1 - i];
        string[tamanho - 1 - i] = temp;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    inverter_string(string);

    printf("A string invertida e: %s\n", string);

    return 0;
}
