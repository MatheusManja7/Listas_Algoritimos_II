
#include <stdio.h>

int main() {
    float matriz[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };

    printf("\n--- Enderecos das Posicoes da Matriz ---\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
        }
    }

    return 0;
}