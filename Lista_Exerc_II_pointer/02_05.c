#include <stdio.h>

int main() {
    int array[5];
    int *p = array;

    printf("\n--- Aritmetica de Ponteiros - Dobro dos Valores ---\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um Numero: ", i + 1);
        scanf("%d", p + i);
    }

    printf("\nDobro dos Valores:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i) * 2);
    }

    return 0;
}