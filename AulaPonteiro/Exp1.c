#include <stdio.h>

int main(){
    int x = 10;
    int *ptr; //Declara um ponteiro para um inteiro

    ptr = &x; //Atribui o endereço de x ao ponteiro ptr

    printf("Valor de x: %d\n", x); //Saída: Valor de x: 10
    printf("Endereco de x: %p\n", &x); //Saída: Endereço de x: (endereço de memória)
    printf("Valor apontado por ptr: %d\n", *ptr); //Saída: Valor apotado por ptr: 10

    return 0;
}