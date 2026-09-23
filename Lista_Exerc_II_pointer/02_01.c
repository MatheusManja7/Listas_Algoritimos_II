#include <stdio.h>

int main() {
    int num1, num2;
    int *maior;

    printf(" \n--- Camparacao de Enderecos ---\n\n");

    if (&num1 > &num2)
    {
        maior = &num1;
    } else {
        maior = &num2;
    }

    printf("Maior endereco: %p\n", (void *)maior);

    return 0;
}