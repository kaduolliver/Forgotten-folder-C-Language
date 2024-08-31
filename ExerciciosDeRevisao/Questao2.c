#include <stdio.h>

int main(){

    float a, b, c, media;
    printf("Digite 3 notas para calcular a media:\n");
    scanf("%f%f%f", &a, &b, &c);

    media = (a+b+c)/3;

    printf("\nA media das notas e: %.2f\n", media);
}