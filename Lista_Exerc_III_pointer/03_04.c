#include <stdio.h>

void inverte_array(int *vetor, int tamanho) {
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;
    int temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    printf("\n--- Inverter a ordem do Array ---\n\n");

    printf("array original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    inverte_array(array, 5);

    printf("\narray invertido: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}