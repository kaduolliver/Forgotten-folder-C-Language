#include <stdio.h>

int main(){

    int mm[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int somaM = 0;

    for(int j = 0; j < 4; j++)
    {
        somaM += mm[i][j];
    }
    printf("%d\n", somaM);
    somaM = 0;
}