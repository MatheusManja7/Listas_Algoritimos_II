#include <stdio.h>

void imprimir(int *vetor) {
    for (int i = 0; i < 5; i++)
    {
        printf("Array: %d\n", *(vetor + i));
    }
    
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    printf("\n--- Aritmetica de Ponteiros - Imprimir Array ---\n\n");

    imprimir(array);

    return 0;
}