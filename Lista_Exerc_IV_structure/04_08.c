#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int bissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }

    return 0;
}

int dias_no_mes(int mes, int ano) {
    if (mes == 2) {
        if (bissexto(ano)) {
            return 29;
        }

        return 28;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }

    return 31;
}

int data_em_dias(struct Data data) {
    int total = 0;

    for (int ano = 1; ano < data.ano; ano++) {
        if (bissexto(ano)) {
            total += 366;
        } else {
            total += 365;
        }
    }

    for (int mes = 1; mes < data.mes; mes++) {
        total += dias_no_mes(mes, data.ano);
    }

    total += data.dia;

    return total;
}

int main() {
    struct Data data1;
    struct Data data2;

    int dias1, dias2;
    int diferenca;

    printf("\n--- Diferenca entre Datas ---\n\n");

    printf("Digite a primeira data:\n");

    printf("Dia: ");
    scanf("%d", &data1.dia);

    printf("Mes: ");
    scanf("%d", &data1.mes);

    printf("Ano: ");
    scanf("%d", &data1.ano);

    printf("\nDigite a segunda data:\n");

    printf("Dia: ");
    scanf("%d", &data2.dia);

    printf("Mes: ");
    scanf("%d", &data2.mes);

    printf("Ano: ");
    scanf("%d", &data2.ano);

    dias1 = data_em_dias(data1);
    dias2 = data_em_dias(data2);

    diferenca = dias1 - dias2;

    if (diferenca < 0) {
        diferenca = -diferenca;
    }

    printf("\nNumero de dias entre as datas: %d\n", diferenca);

    return 0;
}