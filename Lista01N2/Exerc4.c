#include <stdio.h>

#define AL 50  

struct funcionario {
    char nome[AL], cargo[AL];
    int salario;
};

typedef struct funcionario funcionario;

int main() {

    int numFuncionarios;

    printf("Quantos funcionários você deseja cadastrar? ");
    scanf("%d", &numFuncionarios);

    if (numFuncionarios <= 0) {
        printf("Número inválido de funcionários. Encerrando...\n");
        return 1; 
    }

    funcionario funcionarios[numFuncionarios]; 
    int i;

    for (i = 0; i < numFuncionarios; i++) {
        printf("\nDados do funcionário %d:\n", i + 1); 

        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);

        printf("Cargo: ");
        scanf("%s", funcionarios[i].cargo);

        printf("Salário: ");
        scanf("%d", &funcionarios[i].salario);
    }

    printf("\n--- Dados cadastrados ---\n");
    for (i = 0; i < numFuncionarios; i++) {
        printf("\nFuncionário %d:\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salário: %d\n\n", funcionarios[i].salario);
    }

    return 0;
}
