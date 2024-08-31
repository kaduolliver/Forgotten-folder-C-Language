#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

Data adicionarDias(Data dataInicial, int dias) {
    
    dataInicial.dia += dias;

    while (dataInicial.dia > 30) { 
        dataInicial.dia -= 30;
        dataInicial.mes++;
    }

    while (dataInicial.mes > 12) {
        dataInicial.mes -= 12;
        dataInicial.ano++;
    }

    return dataInicial;
}

int main() {
    Data data1 = {15, 5, 2024}; 
    int diasAdicionar = 45;

    Data novaData = adicionarDias(data1, diasAdicionar);

    printf("Data original: %02d/%02d/%d\n", data1.dia, data1.mes, data1.ano);
    printf("Nova data: %02d/%02d/%d\n", novaData.dia, novaData.mes, novaData.ano);

    return 0;
}
