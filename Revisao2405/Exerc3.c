#include <stdio.h>

int main(){

int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num >= 1){
        printf("Esse numero e positivo!\n");
    }else if(num == 0){
        printf("Esse numero e zero!\n");
    }else{
        printf("Esse numero e negativo!\n");
    }

    return 0;

}