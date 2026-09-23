#include <stdio.h>

int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s) {
    for (int *p = vetor; p <= vetor + tam_v - tam_s; p++) {
        int encontrou = 1;

        for (int i = 0; i < tam_s; i++) {
            if (*(p + i) != *(sub + i)) {
                encontrou = 0;
                break;
            }
        }

        if (encontrou) {
            return p;
        }
    }

    return NULL;
}

int main() {
    int array[6] = {10, 20, 30, 40, 50, 60};
    int sub[3] = {30, 40, 50};

    int *resultado;

    printf("\n--- Busca de Subvetor ---\n\n");

    resultado = busca_subvetor(array, 6, sub, 3);

    if (resultado != NULL) {
        printf("Subvetor foi encontrado!\n");
        printf("Primeiro elemento: %d\n", *resultado);
        printf("Endereco: %p\n", (void *)resultado);
    } else {
        printf("Subvetor nao foi encontrado.\n");
    }

    return 0;
}