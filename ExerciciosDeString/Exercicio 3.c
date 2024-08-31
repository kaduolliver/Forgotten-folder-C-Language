#include <stdio.h>
#include <string.h>

#define N 50

int main(){

    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressao de posicao a posicao:\n");
    for(i=0;i<strlen(s);i++){
        printf("%c", s[i]);
    }
}