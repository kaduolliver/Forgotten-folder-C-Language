    #include <stdio.h>

int main(){

    // Inicialização de Array

    int valores[] = {10, 20, 30, 40, 50}; // Isso cria um array de 5 elementos e os inicializa

    // Você pode acessar os elementos assim:
    printf("%d\n", valores[0]); // Isso vai imprimir 10
    printf("%d\n", valores[1]);
    printf("%d\n", valores[2]);
    printf("%d\n", valores[3]);
    printf("%d\n", valores[4]);
    
    // Percorra o array e imprima cada elemento
    for(int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
}