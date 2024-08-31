#include <stdio.h>

float maior(float a, float b){
    if (a > b)
        return a;
    else
        return b;
}

int main(){

    float m, n, o;

    printf("Digite um valor:\n");
    scanf("%f", &m);
    printf("Digite outro valor:\n");
    scanf("%f", &n);

    o = maior(m,n);

    printf("Maior: %.2f\n", o);
}