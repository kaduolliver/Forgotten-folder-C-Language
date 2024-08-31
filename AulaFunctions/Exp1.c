#include <stdio.h>


//função sem retorno e som parametros 
void sayHello1(void){
    puts("Hello 1");
}

//função sem retorn e com parametros
void sayHello2(char greet[50]){
    printf("%s", greet);
}

//função com retorno e sem parametros
int soma1(void){
    return 1+1;
}

//função com retorno e com parametros
int soma2(int num1, int num2){
    return num1 + num2;
}

int main(void) {

    sayHello2("Carlos\n");
    int result = soma2(3, 3);
    printf("%d\n", result);

    return 0;
}