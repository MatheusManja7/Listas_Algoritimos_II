#include <stdio.h>

int *buscar(int *vetor, int tamanho, int x) {
    for (int *p = vetor; p < vetor + tamanho; p++) {
        if (*p == x) {
            return p;
        }
    }

    return NULL;
}

int main() {
    int Array[5] = {1, 2, 3, 4, 5};
    int x;
    int *resultado;

    printf("\n--- Buscar valor no Array ---\n\n");

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &x);

    resultado = buscar(Array, 5, x);

    if (resultado != NULL) {
        printf("Valor encontrado: %d\n", *resultado);
        printf("Endereco: %p\n", (void *)resultado);
    } else {
        printf("Valor nao encontrado.\n");
    }

    return 0;
}