#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *vetor, int tamanho) {
    int *fim;

    for (fim = vetor + tamanho - 1; fim > vetor; fim--) {
        for (int *p = vetor; p < fim; p++) {
            if (*p > *(p + 1)) {
                swap(p, p + 1);
            }
        }
    }
}

int main() {
    int array[5] = {5, 2, 8, 1, 4};

    printf("\n --- Ordenacao simples ---\n\n");

    printf("Array original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    bubble_sort(array, 5);

    printf("\nArray ordenado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}