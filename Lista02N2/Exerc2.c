#include <stdio.h>

int delta(int a, int b, int c){
    return (b*b) - 4*a*c;
}

int main(){

    int result = delta(1, -4, 10);
    printf("%d\n", result);

    return 0;
}