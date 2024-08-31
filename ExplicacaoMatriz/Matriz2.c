#include <stdio.h>

int main(){
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j;

    printf("\n\nimprimindo a primeira linha: \n");
    for (i = 0; 1 < 3; i++)
    {
        printf(" %d ", mat[0][i]);
    }

    printf("\n\nimprimindo a primeira coluna: \n");
    for (j = 0; j < 3; j++)
    {
        printf(" %d ", mat[j][0]);
    }

    printf("\n\nimprimindo a matriz toda: \n");
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
        printf(" |%d| ", mat[i][j]);
    }
    printf("\n");
    }
}