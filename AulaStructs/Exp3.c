#include <stdio.h>

struct retangulo{
    float largura;
    float altura;
    char cor[20];
};

int main(){

    // Criando uma variável do tipo "retangulo
    struct retangulo meu_retangulo;

    // Atribuindo valores aos campos da estrutura
    meu_retangulo.largura = 10.0;
    meu_retangulo.altura = 5.0;
    strcpy(meu_retangulo.cor, "vermelho");

    // Imprimindo os valores
    printf("Largura: %.2f\n", meu_retangulo.largura);
    printf("Altura: %.2f\n", meu_retangulo.altura);
    printf("Cor: %s\n", meu_retangulo.cor);

    return 0;
}