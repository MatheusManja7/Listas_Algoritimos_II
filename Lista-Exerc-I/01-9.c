#include <stdio.h>

float calculoS(int n) {
    float soma = 1;
    int fatorial = 1;

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
        soma += 1.0 / fatorial;
    }
    
    return soma;
}

int main() {
    int n;
    float resultado;

    printf("\n--- Calculo de S ---\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = calculoS(n);

    printf("Valor de S: %.4f\n", resultado);

    return 0;
}