#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *p = &matriz[0][0];
    int soma = 0;

    printf("\n--- Soma da Diagonal Principal ---\n\n");

    soma = *p + *(p + 4) + *(p + 8);

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}