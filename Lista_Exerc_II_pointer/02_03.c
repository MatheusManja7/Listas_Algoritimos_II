#include <stdio.h>

int main() {
    float array[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

    printf(" \n--- Enderecos das Posicoes do Arrray ---\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Array[%d]: %p\n", i, (void *)&array[i]); 
    }
    
    return 0;
}