#include <stdio.h>

int main(){

    int inteiro[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
       {
        printf("Digite o valor para a linha %d\n", j);
        scanf("%d", &inteiro[i][j]);
       }

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("|%d|", inteiro[i][j]);
        }

        puts("");
    }
    }

}