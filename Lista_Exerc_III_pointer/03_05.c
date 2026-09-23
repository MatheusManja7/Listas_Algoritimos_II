#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media) {
    int soma = 0;

    *min = *vetor;
    *max = *vetor;

    for (int i = 0; i < tamanho; i++) {
        if (*(vetor + i) < *min) {
            *min = *(vetor + i);
        }

        if (*(vetor + i) > *max) {
            *max = *(vetor + i);
        }

        soma += *(vetor + i);
    }

    *media = (float)soma / tamanho;
}

int main() {
    int array[5] = {10, 5, 20, 8, 15};

    int min, max;
    float media;

    printf("\n--- Varredura do Array ---\n\n");

    extrair_estatisticas(array, 5, &min, &max, &media);

    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);
    printf("Media: %.2f\n", media);

    return 0;
}