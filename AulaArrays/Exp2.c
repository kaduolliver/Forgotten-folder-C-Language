#include <stdio.h>
#include <string.h>

int main(){

    // Array de caracteres (String)

 
    char nome[20]; // Isso cria um array de caracteres com espaço para 20 caracteres
    
    // Você pode colocar uma palavra dentro do array assim:
    strcpy(nome, "ChatGPT");

    // E pode acessar os caracteres individualmente assim:
    printf("%c\n", nome[0]); //Isso vai imprimir "C"

}