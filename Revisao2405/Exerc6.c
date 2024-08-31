#include <stdio.h>

int main(){

    int num[10];
    int i;
    int ContP = 0;
    int ContI = 0;

    printf("Digite 10 numeros inteiros:\n");    
    for(i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 10; i++){
    if(num[i] % 2 == 0){
        ContP++;
    }else{
        ContI++;
    }
}

printf("\nA quantidade de numeros pares sao: %d\n", ContP);
printf("\nA quantidade de numeros impares sao: %d\n", ContI);

return 0;

}