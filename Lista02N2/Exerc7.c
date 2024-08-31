#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int Dado() {
    
    srand(time(NULL)); 
    
    return (rand() % 6) + 1; 
}

int main() {
    int resultado;

    resultado = Dado();
    printf("Resultado do dado: %d\n", resultado);

    return 0;
}
