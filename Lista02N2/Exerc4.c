#include <stdio.h>

float menor(float a, float b){
    if (a < b)
        return a;
    else
        return b;
}

int main(){

    float m, n, o;

    printf("Insira um valor:\n");
    scanf("%f", &m);
    printf("Insira outro valor:\n");
    scanf("%f", &n);

    o = menor(m,n);

    printf("Menor: %.2f\n", o);

}