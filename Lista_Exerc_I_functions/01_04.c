#include <stdio.h>

void idade_em_dias(int ano, int mes, int dia) {
    int dias_ano, dias_mes, total_dias = 0;

    dias_ano = ano * 365;
    dias_mes = mes * 30;
    total_dias = dias_ano + dias_mes + dia;

    printf("Idade total em Dias: %d dias.", total_dias);
}

int main() {
    int anos, meses, dias;

    printf(" \n--- Idade em Dias ---\n\n");

    printf("OBS: Digite sua Idade em Anos, Meses e Dias.\n\n");

    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    printf("\nIdade Digitada: %d anos, %d meses e %d dias.\n", anos, meses, dias);

    idade_em_dias(anos, meses, dias);

    return 0;
}