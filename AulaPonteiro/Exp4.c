#include <stdio.h>
#include <stdlib.h>

int main(){

    //Versão com Vetor

    // int nums[] = {1, 4, 8};
    // int cont;
    // for(cont=0; cont < 3; cont++){
    //     printf("%d\n", nums[cont]);
    // }

    //Versão com Ponteiro

    int nums[] = {1, 4, 8};
    int cont;
    for(cont=0; cont < 3; cont++){
        printf("%d\n", *(nums + cont));
    }
}