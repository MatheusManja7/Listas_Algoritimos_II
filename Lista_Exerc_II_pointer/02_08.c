#include <stdio.h>

void preencher(int *vetor, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        *(vetor + i) = valor;
    }
}

int main() {
    int array[5];

    printf("\n--- Aritmetica de Ponteiros - Preencher os Elementos ---\n\n");

    preencher(array, 5, 10);

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}