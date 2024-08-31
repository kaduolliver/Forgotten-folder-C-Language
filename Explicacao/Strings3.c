#include <stdio.h>
#include <string.h>
#include <locale.h>

// #define N 20 [1]
#define N 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    // char origem[N] = {"Ola, mundo!"};
    // char destino[N];

    // printf("Antes do strcpy:\n");
    // puts(origem);
    // puts(destino);

    // strcpy(destino,origem);

    // printf("Depois do strcpy:\n");
    // puts(origem);
    // puts(destino);

    // char s1[N] = {"Logica de"};
    // char s2[N] = {" Programacao!"};

    // printf("Antes do strcat:\n");
    // printf("str1: %s\n", s1);
    // printf("str2: %s\n", s2);

    // strcat(s1,s2);

    // printf("Depois do strcat:\n");
    // puts(s1);

    // char s[N];
    // int i;

    // printf("Digite um texto:\n");
    // gets(s);
    // i = strlen(s);
    // printf("\nTamanho do texto: %d\n\n", i);

    // printf("Impressao de posicao a posicao:\n");
    // for(i=0;i<strlen(s);i++){
    //     printf("%c", s[i]);

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if(ok == 0)
        printf("Textos iguais.\n");
    else
        printf("Textos diferentes.\n");



    }

// strcpy (<destino>, <origem>);
// Não use o igual "="

//Biblioteca string.h

// Sintaxes de funções importantes:
// strcpy (<destino>, <origem>);
// strcat (<destino>, <origem>);
// strlen (<string>);
// strcmp (<string1>, <string2>);

//Biblioteca locale.h

//setlocale (LC_ALL, "Portuguese");