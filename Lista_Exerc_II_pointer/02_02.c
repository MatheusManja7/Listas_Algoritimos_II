#include <stdio.h>

int main() {
    int num1, num2;
    int *maior;

    printf(" \n--- Maior Endereco ---\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    if(&num1 > &num2) {
        maior = &num1;
    } else {
        maior = &num2;
    }   

    printf("\nConteudo: %d\n", *maior);

    return 0;
}