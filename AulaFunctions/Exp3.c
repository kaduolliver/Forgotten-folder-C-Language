#include <stdio.h>
#include <stdlib.h>

float maior(float num1, float num2);

int main(){

    float x, y, m;

    puts("Insira um valor:");
    scanf("%f", &x);

    puts("Insira mais um valor:");
    scanf("%f", &y);

    m = maior(x,y);

    printf("Maior: %.2f\n", m);
}

float maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}