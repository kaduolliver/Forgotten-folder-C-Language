#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x, y;
} Ponto;

float distanciaOrigem(Ponto p){
    return sqrt(p.x * p.x + p.y * p.y);
} 

int main(){

    Ponto p1 = {3.0, 4.0};

    float distancia = distanciaOrigem(p1);

    printf("A distancia do ponto (%.2f, %.2f) a origem e: %.2f\n", p1.x, p1.y, distancia);

    return 0;
}

