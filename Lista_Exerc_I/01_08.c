#include <stdio.h>

int somatorio(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    return soma;
}

int main() {
    int num;
    int resultado; 

    printf("\n--- Somatorio de 1 ate n ---\n\n");

    printf("Digite um Numero: ");
    scanf("%d", &num);

    resultado = somatorio(num);

    printf("Somatorio: %d\n", resultado);

    return 0;
}