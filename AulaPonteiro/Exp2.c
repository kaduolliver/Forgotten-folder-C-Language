#include <stdio.h>

void trocar(int *a, int *b){
    int temp = *a; //Armazena o valor de 'a' em uma variável temporária
    *a = *b; //Atribui o valor de 'b' a 'a'
    *b = temp; //Atribui o valor original de 'a' a 'b'
}

int main(){
    int num1 = 5, num2 = 10;

    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

    trocar(&num1, &num2); //Passa os endereços de num1 e num2 para a função trocar

    printf("Apos a troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}