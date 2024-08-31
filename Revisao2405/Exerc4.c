#include <stdio.h>

#define N 5
int main(){

    int vetOri[N], vetInv[N];
    int i;

    for(i = 0; i < N; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vetOri[i]);
    }
    
    for(i = 0; i < N; i++){
        vetInv[i] = vetOri[N-i-1];
        printf("\n%d ", vetInv[i]);
    }

    return 0;
}