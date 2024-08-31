#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int vogais = 0, i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            vogais++;
        }
    }

    printf("A frase possui %d vogais.\n", vogais);

    return 0;
}
