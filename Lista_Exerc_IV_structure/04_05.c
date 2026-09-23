#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    char nome[100];
    struct Data nascimento;
};

int main() {
    struct Pessoa pessoas[6];

    int maisNova = 0;
    int maisVelha = 0;

    printf("\n--- Cadastro de Pessoas ---\n\n");

    for (int i = 0; i < 6; i++) {
        printf("Pessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Dia de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.dia);

        printf("Mes de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.mes);

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.ano);

        printf("\n");
    }

    for (int i = 1; i < 6; i++) {

        if (pessoas[i].nascimento.ano > pessoas[maisNova].nascimento.ano ||
            (pessoas[i].nascimento.ano == pessoas[maisNova].nascimento.ano &&
             pessoas[i].nascimento.mes > pessoas[maisNova].nascimento.mes) ||
            (pessoas[i].nascimento.ano == pessoas[maisNova].nascimento.ano &&
             pessoas[i].nascimento.mes == pessoas[maisNova].nascimento.mes &&
             pessoas[i].nascimento.dia > pessoas[maisNova].nascimento.dia)) {

            maisNova = i;
        }

        if (pessoas[i].nascimento.ano < pessoas[maisVelha].nascimento.ano ||
            (pessoas[i].nascimento.ano == pessoas[maisVelha].nascimento.ano &&
             pessoas[i].nascimento.mes < pessoas[maisVelha].nascimento.mes) ||
            (pessoas[i].nascimento.ano == pessoas[maisVelha].nascimento.ano &&
             pessoas[i].nascimento.mes == pessoas[maisVelha].nascimento.mes &&
             pessoas[i].nascimento.dia < pessoas[maisVelha].nascimento.dia)) {

            maisVelha = i;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Pessoa mais nova: %s\n", pessoas[maisNova].nome);
    printf("Pessoa mais velha: %s\n", pessoas[maisVelha].nome);

    return 0;
}