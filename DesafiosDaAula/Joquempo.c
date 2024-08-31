#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
int jogador, pc;
char opcoes[3][10] = {"Pedra", "Papel", "Tesoura"};

srand(time(NULL));

printf("Escolha sua jogada:\n");
printf("0 - Pedra\n");
printf("1 - Papel\n");
printf("2 - Tesoura\n");
scanf("%d", &jogador);
}