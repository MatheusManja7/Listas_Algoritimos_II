#include <stdio.h>

struct Atleta {
    char nome[100];
    char esporte[100];
    int idade;
    float altura;
};

int main() {
    struct Atleta atletas[5];

    int maisAlto = 0;
    int maisVelho = 0;

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

    for (int i = 1; i < 5; i++) {
        if (atletas[i].altura > atletas[maisAlto].altura) {
            maisAlto = i;
        }

        if (atletas[i].idade > atletas[maisVelho].idade) {
            maisVelho = i;
        }
    }

    printf("\n--- Resultado ---\n");

    printf("Atleta mais alto: %s\n", atletas[maisAlto].nome);
    printf("Altura: %.2f\n", atletas[maisAlto].altura);

    printf("\nAtleta mais velho: %s\n", atletas[maisVelho].nome);
    printf("Idade: %d\n", atletas[maisVelho].idade);

    return 0;
}