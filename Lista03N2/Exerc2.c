#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float largura, altura;
} Retangulo;

float areaRetangulo(Retangulo R){
    return (R.largura * R.altura);
}

int main(){

    Retangulo R1 = {8.0, 5.0};

    float area = areaRetangulo(R1);

    printf("A area do retangulo e: %.2f\n", area);

    return 0;
}