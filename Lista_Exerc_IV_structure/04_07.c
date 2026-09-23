#include <stdio.h>

struct Atleta {
    char nome[100];
    char esporte[100];
    int idade;
    float altura;
};

int main() {
    struct Atleta atletas[5];
    struct Atleta temp;

    printf("\n--- Cadastro de Atletas ---\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Atleta %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", atletas[i].nome);

        printf("Esporte: ");
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);

        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {

            if (atletas[j].idade < atletas[j + 1].idade) {
                temp = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = temp;
            }
        }
    }

    printf("\n--- Atletas por idade ---\n");

    for (int i = 0; i < 5; i++) {
        printf("\nNome: %s\n", atletas[i].nome);
        printf("Esporte: %s\n", atletas[i].esporte);
        printf("Idade: %d\n", atletas[i].idade);
        printf("Altura: %.2f\n", atletas[i].altura);
    }

    return 0;
}