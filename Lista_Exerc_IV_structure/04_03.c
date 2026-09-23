#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno alunos[5];
    float media, maiorMedia = 0;
    int posicao = 0;

    printf("\n--- Cadastro de Alunos ---\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (media > maiorMedia) {
            maiorMedia = media;
            posicao = i;
        }

        printf("\n");
    }

    printf("\n--- Aluno com Maior Media ---\n");
    printf("Nome: %s\n", alunos[posicao].nome);
    printf("Nota 1: %.2f\n", alunos[posicao].nota1);
    printf("Nota 2: %.2f\n", alunos[posicao].nota2);
    printf("Nota 3: %.2f\n", alunos[posicao].nota3);
    printf("Media: %.2f\n", maiorMedia);

    return 0;
}